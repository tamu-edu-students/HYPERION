import os
import numpy as np
import spiceypy as sp
import matplotlib as mpl
import matplotlib.pyplot as plt
mpl.use("pgf")
from matplotlib import rc
from mpl_toolkits.basemap import Basemap
from scipy.integrate import solve_ivp
from .constants import *
from src import *
from icecream import ic
from scipy.optimize import minimize 

# Use PGF backend for LaTeX compatibility
plt.rcParams.update({
    "pgf.texsystem": "pdflatex",
    "font.family": "serif",
    "text.usetex": True,
    "pgf.rcfonts": False,
})

download_kernels()
load_kernels()

LAUNCH_ET = sp.str2et("2025 Mar 19 22:21:50.000 UTC") # s

launch_site = Site(62.96, 40.683, "Arkhangelsk Oblast", "Russia", h=16.936)
target_site = Site(38.8977, -77.0365, "Washington, DC", "United States")

### Simulate ###
def x_dot_missile(t, x, nom_params):
    """
    Equations of motion for the ballistic phase of a missile trajectory 
    in an inertial (Cartesian) frame.

    Parameters
    ----------
    - t: Current time in seconds (used for integration)
    - x: State vector, ordered as follows:
        - r: Inertial position vector [x, y, z] in km
        - v: Inertial velocity vector [vx, vy, vz] in km/s
        - m: Mass of the missile in kg
        - delta_T: Thrust deviation from nominal in kN
        - delta_Isp: Specific impulse deviation from nominal in seconds
        - delta_beta: Ballistic coefficient deviation from nominal in kg/km^2
        - delta_rho0: Sea-level density deviation from nominal in kg/km^3
        - delta_kp: Scale height (decay constant) deviation from nominal in km
    - nom_params: Nominal parameters:
        - T_bar: Nominal thrust in kN
        - Isp_bar: Nominal specific impulse in seconds
        - beta_bar: Nominal ballistic coefficient in kg/km^2
        - rho0_bar: Nominal sea-level atmospheric density in kg/km^3
        - kp_bar: Nominal exponential decay constant in km

    Returns
    -------
    dx : ndarray, shape (n,)
        Time derivative of the state vector.
    """
    r = x[0:3]
    v = x[3:6]
    m = x[6]
    delta_T, delta_Isp, delta_beta, delta_rho0, delta_kp, delta_lambda = x[7:]

    T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, lambda_bar = nom_params

    T = T_bar + delta_T
    Isp = Isp_bar + delta_Isp
    beta = beta_bar + delta_beta
    rho0 = rho0_bar + delta_rho0
    kp = kp_bar + delta_kp
    lambda_ = lambda_bar + delta_lambda

    r_mag = np.linalg.norm(r)
    v_mag = np.linalg.norm(v)

    h = r_mag - R_E  # Altitude above Earth surface (km)
    rho = rho0 * np.exp(-h / kp)  # Exponential atmosphere model

    # === Forces ===
    # Thrust
    a_T = (T / m) * (v / v_mag)

    # Drag
    a_D = (-rho * v_mag / (2 * beta)) * v  # km/s^2

    # Lift
    D = a_D * m
    D_mag = np.linalg.norm(D)

    v_hat = v / v_mag
    r_hat = r / r_mag

    h = r_mag - R_E  # altitude (km)

    # Dynamic glide control logic
    if lambda_bar > 0.0:
        Kp = 1
        Kd = 20

        gamma = np.arcsin(np.dot(v_hat, r_hat))

        dt = 0.0

        if not hasattr(x_dot_missile, "gamma_km1"):
            x_dot_missile.gamma_km1 = gamma
            x_dot_missile.tkm1 = t
            gamma_dot = 0.0
        else:
            dt = max(t - x_dot_missile.tkm1, 1e-6)
            gamma_dot = (gamma - x_dot_missile.gamma_km1) / dt
            x_dot_missile.gamma_km1 = gamma
            x_dot_missile.tkm1 = t

        if h > 20:
            gamma_des = np.radians(+3.0)
        elif h > 2:
            gamma_des = np.radians(0.0)
        else:
            gamma_des = np.radians(-3.0)

        gamma_error = gamma - gamma_des
        lambda_dot = -Kp * gamma_error - Kd * gamma_dot

        if not hasattr(x_dot_missile, "lambda_cmd"):
            x_dot_missile.lambda_cmd = lambda_bar

        x_dot_missile.lambda_cmd += lambda_dot * dt
        x_dot_missile.lambda_cmd = np.clip(x_dot_missile.lambda_cmd, 0.0, lambda_)
        lambda_ = x_dot_missile.lambda_cmd

    # Lift in plane of velocity and local vertical, perpendicular to velocity
    lift_dir = np.cross(np.cross(v_hat, r_hat), v_hat)
    lift_dir /= np.linalg.norm(lift_dir)

    L = lambda_ * D_mag * lift_dir
    a_L = L / m

    # Gravity
    a_g = (-MU_E / r_mag**3) * r

    # === Time derivatives ===
    dx = np.zeros_like(x)
    dx[0:3] = v
    dx[3:6] = a_T + a_D + a_L + a_g
    dx[6] = -(kN2N(T)) / (G0 * Isp)
    dx[7:] = 0  # Deviation states are considered constant

    # ic(m)

    return dx

def propagate(az: float = None, pitch: float = None, stage_durations: list = None, lambda_bar_glide: float = None):
    # Truth
    r0 = launch_site.geodetic2eci(LAUNCH_ET)  # km

    def compute_az(lat1, lon1, lat2, lon2):
        lat1 = np.radians(lat1)
        lon1 = np.radians(lon1)
        lat2 = np.radians(lat2)
        lon2 = np.radians(lon2)
        dlon = lon2 - lon1

        x = np.sin(dlon) * np.cos(lat2)
        y = np.cos(lat1) * np.sin(lat2) - np.sin(lat1) * np.cos(lat2) * np.cos(dlon)

        return np.arctan2(x, y)  # radians from north

    # Azimuth from launch to target
    if az is None:
        az = compute_az(launch_site.lat, launch_site.lon, target_site.lat, target_site.lon)
    else:
        az = np.radians(az)

    # Local ENU basis at launch site in ECI frame
    east, north, up = launch_site.enu_basis(LAUNCH_ET)

    # Pitch angle
    if pitch is None:
        pitch = np.radians(50)
    else:
        pitch = np.radians(pitch)

    # Compose velocity direction in ECI frame
    v_dir = (
        np.cos(pitch) * np.sin(az) * east +
        np.cos(pitch) * np.cos(az) * north +
        np.sin(pitch) * up
    )

    v0 =  v_dir / np.linalg.norm(v_dir)  # Unit vector for an initial condition (km/s)

    # r, v, m, delta_T, delta_Isp, delta_beta, delta_rho0, delta_kp, delta_lambda
    x0 = np.hstack([r0, v0, [89370, 0, 0, 0, 0, 0, 0]])

    # Constants
    beta_bar = 1.3e10     # kg/km^2
    rho0_bar = 1.46e9     # kg/km^3
    kp_bar = 6.970        # km

    trajectory = []
    t0 = 0.0
    x = x0.copy()

    # === BOOST PHASE ===
    if stage_durations is None:
        stages = [
            {"duration": 48.11, "T": 209, "Isp": 259, "m": tonne2kg(48.99)},
            {"duration": 142.52, "T": 124.7, "Isp": 309, "m": tonne2kg(27.67)},
            {"duration": 10.038, "T": 29.48, "Isp": 300, "m": tonne2kg(7.71)}
        ]
    else:
        stages = [
            {"duration": stage_durations[0], "T": 209, "Isp": 259, "m": tonne2kg(48.99)},
            {"duration": stage_durations[1], "T": 124.7, "Isp": 309, "m": tonne2kg(27.67)},
            {"duration": stage_durations[2], "T": 29.48, "Isp": 300, "m": tonne2kg(7.71)}
        ]

    for stage in stages:
        T_bar = stage["T"] * G0  # Convert from tonnes-force to N
        Isp_bar = stage["Isp"]
        lambda_bar = 0.0  # No lift during boost
        nom_params = [T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, lambda_bar]

        mass_initial = x[6]
        mass_floor = mass_initial - stage["m"]

        def mass_limit_event(t, x):
            return x[6] - mass_floor
        mass_limit_event.terminal = True
        mass_limit_event.direction = -1

        sol = solve_ivp(
            fun=lambda t, x: x_dot_missile(t, x, nom_params),
            t_span=(t0, t0 + stage["duration"]),
            y0=x,
            max_step=1.0,
            rtol=1e-9,
            atol=1e-9,
            events=mass_limit_event
        )

        trajectory.append(sol)
        x = sol.y[:, -1]
        mass_burned = mass_initial - x[6]
        mass_unused = stage["m"] - mass_burned

        # Drop the remaining unused fuel
        x[6] -= max(0.0, mass_unused)

        t0 += sol.t[-1] - sol.t[0]  # Actual burn duration, not full requested

    # === BALLISTIC RE-ENTRY PHASE ===
    T_bar = 0.0        # No thrust
    Isp_bar = 300      # Not used
    lambda_bar = 0.0   # No lift during re-entry
    nom_params = [T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, lambda_bar]

    def hit_100km(t, x):  # Event: reentry at 100 km
        r_mag = np.linalg.norm(x[0:3])
        return r_mag - (R_E + 100.0)
    hit_100km.terminal = True
    hit_100km.direction = -1  # trigger when descending past 100 km

    sol = solve_ivp(
        fun=lambda t, x: x_dot_missile(t, x, nom_params),
        t_span=(t0, t0 + 10000),  # upper bound
        y0=x,
        max_step=1.0,
        rtol=1e-9,
        atol=1e-9,
        events=hit_100km
    )

    trajectory.append(sol)
    x = sol.y[:, -1]
    t0 = sol.t[-1]

    # === GLIDE PHASE ===
    if lambda_bar_glide is None:
        lambda_bar_glide = 2.6 # Now aerodynamic glide

    nom_params = [T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, lambda_bar_glide]
    x[12] = 0.0       # Set delta_lambda = 0

    def hit_0km(t, x):  # Event: hit the ground
        r_mag = np.linalg.norm(x[0:3])
        return r_mag - R_E
    hit_0km.terminal = True
    hit_0km.direction = -1

    sol = solve_ivp(
        fun=lambda t, x: x_dot_missile(t, x, nom_params),
        t_span=(t0, t0 + 10000), # upper bound
        y0=x,
        max_step=1.0,
        rtol=1e-9,
        atol=1e-9,
        events=hit_0km
    )

    trajectory.append(sol)

    return trajectory


### Optimize ###
def objective(vars):
    # Decision variables: initial pitch angle, boost durations, L/D ratio
    az, pitch, dur1, dur2, dur3, lambda_bar = vars

    # Bounds enforcement manually in case optimizer goes out of bounds
    if pitch <= 50 or pitch >= 90:
        return 1e6
    if lambda_bar > 5 or lambda_bar < 2:
        return 1e6
    if any(d < 10 for d in [dur1, dur2, dur3]):
        return 1e6

    try:
        traj = propagate(
            az=az,
            pitch=pitch,
            stage_durations=[dur1, dur2, dur3],
            lambda_bar_glide=lambda_bar
        )
    except:
        return 1e6

    # Altitudes
    altitudes = np.hstack([
        np.linalg.norm(seg.y[0:3], axis=0) - R_E
        for seg in traj
    ])
    if np.any(altitudes > 200.0):
        return 1e6 + np.max(altitudes - 200)

    # Final position
    r_final = traj[-1].y[0:3, -1]
    r_target = target_site.geodetic2eci(LAUNCH_ET + traj[-1].t[-1])
    dist = np.linalg.norm(np.array(r_final) - np.array(r_target))

    ic(dist)

    return dist

def optimize():
    # az, pitch, stage durations, L/D
    x0 = [-55.23789047929811, 50.50742095881391, 61.41250927, 117.93316114, 60.87570696, 2.0175381016605405]

    # === RUN OPTIMIZATION ===
    result = minimize(
        objective,
        x0,
        method="Nelder-Mead",
        options={"disp": True}
    )

    print("\n=== OPTIMIZATION COMPLETE ===")
    print("Azimuth angle (deg):", result.x[0])
    print("Pitch angle (deg):", result.x[1])
    print("Stage durations (s):", result.x[2:5])
    print("L/D ratio:", result.x[5])
    print("Distance to target (km):", result.fun)

    return result.x


### STK Ephemeris Generator
def make_ephemeris(trajectory):
    # Stitch together all time histories
    times = np.hstack([seg.t for seg in trajectory])
    states = np.hstack([seg.y[:6] for seg in trajectory])  # Only r and v

    def format_et(et):
        from datetime import datetime
        utc_str = sp.et2utc(et, 'ISOC', 3)
        dt = datetime.strptime(utc_str, "%Y-%m-%dT%H:%M:%S.%f")
        return dt.strftime("%d %b %Y %H:%M:%S.%f")[:-3] 

    # Write to STK ephemeris format
    with open(os.path.join(DATA_DIR, "missile.e"), 'w') as f:
        f.write("stk.v.12.0\n")
        f.write("BEGIN Ephemeris\n")
        f.write("NumberOfEphemerisPoints {}\n".format(len(times)))
        f.write("ScenarioEpoch {}\n".format(format_et(LAUNCH_ET)))
        f.write("InterpolationMethod Lagrange\n")
        f.write("InterpolationOrder 5\n")
        f.write("CentralBody Earth\n")
        f.write("CoordinateSystem Inertial\n")
        f.write("EphemerisTimePosVel\n")

        for t, state in zip(times, states.T):
            line = f"{t:.3f} " + " ".join(f"{v:.8f}" for v in state) + "\n"
            f.write(line)

        f.write("END Ephemeris\n")


### Plot ###
def plot_altitude(trajectory):
    plt.figure(figsize=(8, 5))

    # Define segment styling
    colors = ["tab:red", "tab:orange", "tab:green"]
    labels = ["Boost Phase", "Ballistic Re-entry", "Glide Phase"]

    # Boost
    for i in range(3):
        seg = trajectory[i]
        times = seg.t
        positions = seg.y[0:3]
        r_magnitudes = np.linalg.norm(positions, axis=0)
        altitudes = r_magnitudes - R_E

        label = labels[0] if i == 0 else None  
        plt.plot(times, altitudes, color=colors[0], label=label)

    # Ballistic Re-entry
    seg = trajectory[3]
    times = seg.t
    positions = seg.y[0:3]
    r_magnitudes = np.linalg.norm(positions, axis=0)
    altitudes = r_magnitudes - R_E
    plt.plot(times, altitudes, color=colors[1], label=labels[1])

    # Glide
    seg = trajectory[4]
    times = seg.t
    positions = seg.y[0:3]
    r_magnitudes = np.linalg.norm(positions, axis=0)
    altitudes = r_magnitudes - R_E
    plt.plot(times, altitudes, color=colors[2], label=labels[2])

    # Labels and layout
    plt.xlabel("Time Elapsed [s]")
    plt.ylabel("Altitude [km]")
    plt.grid(True)
    plt.legend()
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, "altitude.pdf"))


def plot_velocity(trajectory):
    plt.figure(figsize=(8, 5))

    colors = ["tab:red", "tab:orange", "tab:green"]
    labels = ["Boost Phase", "Ballistic Re-entry", "Glide Phase"]

    # Plot first 3 segments (boost)
    for i in range(3):
        seg = trajectory[i]
        times = seg.t
        velocities = seg.y[3:6]
        v_mag = np.linalg.norm(velocities, axis=0)

        label = labels[0] if i == 0 else None  # Only label the first boost segment
        plt.plot(times, v_mag, color=colors[0], label=label)

    # Ballistic Re-entry
    seg = trajectory[3]
    times = seg.t
    velocities = seg.y[3:6]
    v_mag = np.linalg.norm(velocities, axis=0)
    plt.plot(times, v_mag, color=colors[1], label=labels[1])

    # Glide Phase
    seg = trajectory[4]
    times = seg.t
    velocities = seg.y[3:6]
    v_mag = np.linalg.norm(velocities, axis=0)
    plt.plot(times, v_mag, color=colors[2], label=labels[2])

    # Labels and layout
    plt.xlabel("Time Elapsed [s]")
    plt.ylabel("Speed [km/s]")
    plt.grid(True)
    plt.legend()
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, "velocity.pdf"))


def plot_mass(trajectory):
    plt.figure(figsize=(8, 5))

    colors = ["tab:red", "tab:orange", "tab:green"]
    labels = ["Boost Phase 1", "Boost Phase 2", "Boost Phase 3"]

    for i in range(3):
        seg = trajectory[i]
        times = seg.t
        masses = seg.y[6]
        plt.plot(times, masses, color=colors[i], label=labels[i])

    # Labels and layout
    plt.xlabel("Time Elapsed [s]")
    plt.ylabel("Mass [kg]")
    plt.grid(True)
    plt.legend()
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, "mass.pdf"))

def plot_trajectory_2D(trajectory):
    # Setup the map
    fig = plt.figure(figsize=(10, 6))
    m = Basemap(projection='mill',
                llcrnrlon=-90, llcrnrlat=20,
                urcrnrlon=60, urcrnrlat=80,
                resolution='l')

    m.drawcoastlines()
    m.drawcountries()
    m.drawmapboundary(fill_color='#ADD8E6')
    m.fillcontinents(color='#C19A6B', lake_color='#ADD8E6')
    m.drawparallels(np.arange(20, 81, 10), labels=[1,0,0,0])
    m.drawmeridians(np.arange(-90, 61, 30), labels=[0,0,0,1])

    # Color and label settings
    colors = ["tab:red", "tab:orange", "tab:green"]
    labels = ["Boost Phase", "Ballistic Re-entry", "Glide Phase"]

    for i, seg in enumerate(trajectory):
        times = seg.t
        positions = seg.y[0:3]

        lats, lons = [], []
        for j in range(len(times)):
            r_eci = positions[:, j]
            mat = sp.pxform("J2000", "ITRF93", LAUNCH_ET + times[j])
            r_ecef = mat @ r_eci
            lon, lat, _ = sp.recgeo(r_ecef, R_E, 0.0)
            lons.append(np.degrees(lon))
            lats.append(np.degrees(lat))

        color = (
            colors[0] if i < 3 else
            colors[1] if i == 3 else
            colors[2]
        )
        label = (
            labels[0] if i == 0 else
            labels[1] if i == 3 else
            labels[2] if i == 4 else
            None
        )

        x, y = m(lons, lats)
        m.plot(x, y, color=color, linewidth=2, label=label)

    plt.legend(loc='upper right')
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, "trajectory_2d.pdf"))

def plot_trajectory_3D(trajectory):
    positions = np.hstack([seg.y[0:3] for seg in trajectory])  # ECI position

    # Create Earth sphere
    u, v = np.linspace(0, 2 * np.pi, 100), np.linspace(0, np.pi, 100)
    x_earth = R_E * np.outer(np.cos(u), np.sin(v))
    y_earth = R_E * np.outer(np.sin(u), np.sin(v))
    z_earth = R_E * np.outer(np.ones_like(u), np.cos(v))

    # Plot
    fig = plt.figure(figsize=(10, 8))
    ax = fig.add_subplot(111, projection="3d")
    ax.view_init(elev=25, azim=120)

    # Earth
    ax.plot_surface(x_earth, y_earth, z_earth, color='lightblue', alpha=0.5, zorder=0)

    # Trajectories
    ax.plot(positions[0, :], positions[1, :], positions[2, :], color="red", zorder=1, linewidth=2.5)

    ax.set_xlabel("X [km]")
    ax.set_ylabel("Y [km]")
    ax.set_zlabel("Z [km]")
    ax.grid(True)

    # Scale the axes equally
    ax.set_box_aspect([1, 1, 1])  # equal aspect

    plt.tight_layout()
    # plt.show()
    plt.savefig(os.path.join(FIGURES_DIR, TRAJECTORY_3D_FILENAME + ".pdf"))

def plot_downrange(trajectory):
    altitudes = []
    downranges = []
    total_range = 0.0
    prev_point_ecef = None

    for seg in trajectory:
        for i in range(len(seg.t)):
            r_eci = seg.y[0:3, i]
            t = seg.t[i]

            # Convert to ECEF
            mat = sp.pxform("J2000", "ITRF93", LAUNCH_ET + t)
            r_ecef = mat @ r_eci

            # Compute altitude
            h = np.linalg.norm(r_ecef) - R_E
            altitudes.append(h)

            # Compute horizontal distance incrementally along ECEF arc
            if prev_point_ecef is None:
                downranges.append(0.0)
            else:
                dR = np.linalg.norm(r_ecef - prev_point_ecef)
                total_range += dR
                downranges.append(total_range)

            prev_point_ecef = r_ecef

    # Convert m to km
    downranges = np.array(downranges)
    altitudes = np.array(altitudes)

    # Plot
    plt.figure(figsize=(8, 5))
    plt.plot(downranges, altitudes, color="tab:blue", linewidth=2)
    plt.xlabel("Downrange [km]")
    plt.ylabel("Altitude [km]")
    plt.grid(True)
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, "downrange.pdf"))


if __name__ == "__main__":
    # result = optimize()
    # az = result[0] # deg
    # pitch = result[1] # deg
    # stage_durations = result[2:5]
    # lambda_bar_glide = result[5]

    # trajectory = propagate(az=az, pitch=pitch, stage_durations=stage_durations, lambda_bar_glide=lambda_bar_glide)
    trajectory = propagate(az=-53.09453,pitch=40.30623,stage_durations=[27.7656,63.43829,36.5789],lambda_bar_glide=2.49101) # Optimized parameters
    make_ephemeris(trajectory)
    plot_altitude(trajectory)
    plot_velocity(trajectory)
    plot_mass(trajectory)
    plot_trajectory_2D(trajectory)
    plot_trajectory_3D(trajectory)
    plot_downrange(trajectory)
