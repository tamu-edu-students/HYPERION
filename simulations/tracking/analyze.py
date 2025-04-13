"""
`analyze.py`

Analysis and plotting functions.
"""
import os 
import pickle
import spiceypy as spice
import matplotlib as mpl
import matplotlib.pyplot as plt
mpl.use("pgf")
from matplotlib import rc
from mpl_toolkits.basemap import Basemap
from .constants import *
from src import *

# Use PGF backend for LaTeX compatibility
plt.rcParams.update({
    "pgf.texsystem": "pdflatex",
    "font.family": "serif",
    "text.usetex": True,
    "pgf.rcfonts": False,
})

def plot_ekf():
    with open(os.path.join(DATA_DIR, EKF_STORE_FILENAME+".pkl"), "rb") as f:
        ekf_store = pickle.load(f)  

    t = ekf_store.t  
    ex = ekf_store.ex  
    sx = ekf_store.sx 
    t_interleaved = sec2min(t.repeat(2))

    labels_pos = [r"$x$ [m]", r"$y$ [m]", r"$z$ [m]"]
    labels_vel = [r"$\dot{x}$ [m/s]", r"$\dot{y}$ [m/s]", r"$\dot{z}$ [m/s]"]

    # --- Position Error Plots ---
    fig_pos, axs_pos = plt.subplots(3, 1, figsize=(8, 9), sharex=True)
    for i in range(3):
        axs_pos[i].plot(t_interleaved, 1000 * ex[i, :], label="Error", color="black")
        axs_pos[i].plot(t_interleaved, 1000 * 3 * sx[i, :], color="tab:blue", label=r"$\pm3\sigma$")
        axs_pos[i].plot(t_interleaved, 1000 * -3 * sx[i, :], color="tab:blue")
        axs_pos[i].set_ylabel(labels_pos[i])
        axs_pos[i].grid(True)
        axs_pos[i].set_ylim(-1000, 1000)

    axs_pos[-1].set_xlabel("Time Elapsed [min]")
    axs_pos[0].legend(loc="upper right")
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, POSITION_ERROR_FILENAME+".pdf"))
    plt.close(fig_pos)

    # --- Velocity Error Plots ---
    fig_vel, axs_vel = plt.subplots(3, 1, figsize=(8, 9), sharex=True)
    for i in range(3, 6):
        axs_vel[i-3].plot(t_interleaved, 1000 * ex[i, :], label="Error", color="black")
        axs_vel[i-3].plot(t_interleaved, 1000 * 3 * sx[i, :], color="tab:blue", label=r"$\pm3\sigma$")
        axs_vel[i-3].plot(t_interleaved, 1000 * -3 * sx[i, :], color="tab:blue")
        axs_vel[i-3].set_ylabel(labels_vel[i-3])
        axs_vel[i-3].grid(True)
        axs_vel[i-3].set_ylim(-100, 100)

    axs_vel[-1].set_xlabel("Time Elapsed [min]")
    axs_vel[0].legend(loc="upper right")
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, VELOCITY_ERROR_FILENAME+".pdf"))
    plt.close(fig_vel)

def plot_monte_carlo():
    # Load Monte Carlo results
    with open(os.path.join(DATA_DIR, MONTE_CARLO_FILENAME + ".pkl"), "rb") as f:
        data = pickle.load(f)

    t = sec2min(data["t"].repeat(2))  # Interleaved time for stair-step visual
    ex_sample = data["ex_sample"]
    sx_sample = data["sx_sample"]
    sx_ekf = data["sx_ekf"]

    labels_pos = [r"$x$ [m]", r"$y$ [m]", r"$z$ [m]"]
    labels_vel = [r"$\dot{x}$ [m/s]", r"$\dot{y}$ [m/s]", r"$\dot{z}$ [m/s]"]

    ### Position ###
    fig_pos, axs_pos = plt.subplots(3, 1, figsize=(8, 9), sharex=True)
    for i in range(3):
        axs_pos[i].plot(t, 1000 * ex_sample[i, :], label="Average Filter Error", color="tab:blue")
        axs_pos[i].plot(t, 1000 * 3 * sx_ekf[i, :], linestyle="--", color="tab:blue", label=r"Average Filter $\pm3\sigma$")
        axs_pos[i].plot(t, 1000 * -3 * sx_ekf[i, :], linestyle="--", color="tab:blue")
        axs_pos[i].plot(t, 1000 * 3 * sx_sample[i, :], linestyle="--", color="black", label=r"Monte Carlo $\pm3\sigma$")
        axs_pos[i].plot(t, 1000 * -3 * sx_sample[i, :], linestyle="--", color="black")
        axs_pos[i].set_ylabel(labels_pos[i])
        axs_pos[i].grid(True)
        axs_pos[i].set_ylim(-1000, 1000)

    axs_pos[-1].set_xlabel("Time Elapsed [min]")
    axs_pos[0].legend(loc="upper right")
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, MONTE_CARLO_POSITION_FILENAME+".png"))
    plt.close(fig_pos)

    ### Velocity ###
    fig_vel, axs_vel = plt.subplots(3, 1, figsize=(8, 9), sharex=True)
    for i in range(3, 6):
        axs_vel[i-3].plot(t, 1000 * ex_sample[i, :], label="Average Filter Error", color="tab:blue")
        axs_vel[i-3].plot(t, 1000 * 3 * sx_ekf[i, :], linestyle="--", color="tab:blue", label=r"Average Filter $\pm3\sigma$")
        axs_vel[i-3].plot(t, 1000 * -3 * sx_ekf[i, :], linestyle="--", color="tab:blue")
        axs_vel[i-3].plot(t, 1000 * 3 * sx_sample[i, :], linestyle="--", color="black", label=r"Monte Carlo $\pm3\sigma$")
        axs_vel[i-3].plot(t, 1000 * -3 * sx_sample[i, :], linestyle="--", color="black")
        axs_vel[i-3].set_ylabel(labels_vel[i-3])
        axs_vel[i-3].grid(True)
        axs_vel[i-3].set_ylim(-100, 100)

    axs_vel[-1].set_xlabel("Time Elapsed [min]")
    axs_vel[0].legend(loc="upper right")
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, MONTE_CARLO_VELOCITY_FILENAME+".png"))
    plt.close(fig_vel)

def plot_trajectory_2D(t0_utc):
    """
    Parameters
    ----------
    - t0_utc: Launch time in SPICE format, e.g. "2025 MAR 19 22:21:50.000"
    """
    # Load EKF and missile data
    with open(os.path.join(DATA_DIR, EKF_STORE_FILENAME + ".pkl"), "rb") as f:
        ekf_store = pickle.load(f)
    missile_store = np.load(os.path.join(DATA_DIR, MISSILE_STORE_FILENAME + ".npz"), allow_pickle=True)
    
    x_m_store = missile_store["x_store"]
    t_store = missile_store["t_store"]  - missile_store["t_store"][0]  # Relative to launch time

    mx_post = ekf_store.mx_post
    t_ekf = ekf_store.t  # Relative to launch time

    # Convert launch time to datetime and SPICE ephemeris time (ET)
    t0_et = spice.str2et(t0_utc)

    ### Convert missile truth ECI to lat/lon ###
    et_missile = t0_et + t_store  # seconds since ref time
    x_m_llh = []
    for i in range(len(t_store)):
        x_eci = x_m_store[i][:3]
        mat = spice.pxform("J2000", "ITRF93", et_missile[i])
        x_ecef = mat @ x_eci
        lon, lat, _ = spice.recgeo(x_ecef, R_E, 0.0)
        x_m_llh.append((np.degrees(lon), np.degrees(lat)))
    lons_truth, lats_truth = zip(*x_m_llh)

    ### Convert EKF estimate ECI to lat/lon ###
    et_ekf = t0_et + t_ekf
    x_e_llh = []
    for i in range(len(t_ekf)):
        x_eci = mx_post[:3, i]
        mat = spice.pxform("J2000", "ITRF93", et_ekf[i])
        x_ecef = mat @ x_eci
        lon, lat, _ = spice.recgeo(x_ecef, R_E, 0.0)
        x_e_llh.append((np.degrees(lon), np.degrees(lat)))
    lons_est, lats_est = zip(*x_e_llh)

    ### Plot ###
    fig = plt.figure(figsize=(10, 6))
    m = Basemap(projection='mill',
                llcrnrlon=-90, llcrnrlat=20,
                urcrnrlon=60, urcrnrlat=80,
                resolution='l')
    # m = Basemap(projection='mill', resolution='l')

    m.drawcoastlines()
    m.drawcountries()
    m.drawmapboundary(fill_color='#ADD8E6')
    m.fillcontinents(color='#C19A6B', lake_color='#ADD8E6')
    m.drawparallels(np.arange(20, 81, 10), labels=[1,0,0,0])
    m.drawmeridians(np.arange(-90, 61, 30), labels=[0,0,0,1])
    # m.drawparallels(np.arange(-90, 91, 30), labels=[1,0,0,0])
    # m.drawmeridians(np.arange(-180, 181, 60), labels=[0,0,0,1])

    # Convert coordinates
    x_truth, y_truth = m(lons_truth, lats_truth)
    x_est, y_est = m(lons_est, lats_est)

    plt.plot(x_truth, y_truth, label="Truth", color="red", linewidth=2)
    plt.plot(x_est, y_est, label="EKF Estimate", color="black", linewidth=2, linestyle="--")

    plt.legend(loc="upper right")
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, TRAJECTORY_2D_FILENAME + ".pdf"))
    plt.close(fig)

def plot_trajectory_3D():
    # Load missile truth
    missile_store = np.load(os.path.join(DATA_DIR, MISSILE_STORE_FILENAME + ".npz"), allow_pickle=True)
    x_m_store = missile_store["x_store"] 

    # Load EKFStore (pickled)
    with open(os.path.join(DATA_DIR, EKF_STORE_FILENAME + ".pkl"), "rb") as f:
        ekf_store = pickle.load(f)

    # Extract posterior trajectory from EKF
    mx_post = ekf_store.mx_post

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
    ax.plot(x_m_store[:, 0], x_m_store[:, 1], x_m_store[:, 2], label="Truth", color="black", zorder=1, linewidth=2.5)
    ax.plot(mx_post[0, :], mx_post[1, :], mx_post[2, :], label="EKF Estimate", color="red", zorder=2, linewidth=2.5, linestyle="--")

    ax.set_xlabel("X [km]")
    ax.set_ylabel("Y [km]")
    ax.set_zlabel("Z [km]")
    ax.set_title("Missile Trajectory Over Earth")
    ax.legend()
    ax.grid(True)

    # Scale the axes equally
    max_range = np.max(np.linalg.norm(x_m_store, axis=1))
    ax.set_xlim(-max_range, max_range)
    ax.set_ylim(-max_range, max_range)
    ax.set_zlim(-max_range, max_range)
    ax.set_box_aspect([1, 1, 1])  # equal aspect

    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, TRAJECTORY_3D_FILENAME + ".pdf"))

### Plot ###
def plot_altitude():
    plt.figure(figsize=(8, 5))

    # Define segment styling
    colors = {
        "boost1": "tab:red",
        "boost2": "tab:red",
        "boost3": "tab:red",
        "ballistic": "tab:orange",
        "glide": "tab:green"
    }

    labels = {
        "boost1": "Boost Phase",
        "boost2": None,
        "boost3": None,
        "ballistic": "Ballistic Re-entry",
        "glide": "Glide Phase"
    }

    # Load missile data
    missile_store = np.load(os.path.join(DATA_DIR, MISSILE_STORE_FILENAME + ".npz"), allow_pickle=True)
    t_store = missile_store["t_store"]           # shape (N,)
    x_m_store = missile_store["x_store"]         # shape (N, 13)
    phase_store = missile_store["phase_store"]   # shape (N,) — string labels

    # Compute true altitudes
    altitudes = np.linalg.norm(x_m_store[:, 0:3], axis=1) - R_E

    # Group by phase
    plotted = set()
    for phase in np.unique(phase_store):
        mask = (phase_store == phase)
        label = labels[phase] if labels[phase] and phase not in plotted else None
        plt.plot(t_store[mask], altitudes[mask], color=colors[phase], label=label)
        plotted.add(phase)

    # === EKF Altitude Overlay ===
    with open(os.path.join(DATA_DIR, EKF_STORE_FILENAME + ".pkl"), "rb") as f:
        ekf_store = pickle.load(f)

    mx_post = ekf_store.mx_post  # shape (13, T)
    t_ekf = ekf_store.t          # shape (T,)

    alt_ekf = np.linalg.norm(mx_post[0:3, :], axis=0) - R_E
    plt.plot(t_ekf, alt_ekf, color="black", linestyle=":", linewidth=2, label="EKF Estimate")

    # Labels and layout
    plt.xlabel("Time Elapsed [s]")
    plt.ylabel("Altitude [km]")
    plt.grid(True)
    plt.legend()
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, "altitude.pdf"))

def plot_speed():
    plt.figure(figsize=(8, 5))

    # Phase colors and labels
    colors = {
        "boost1": "tab:red",
        "boost2": "tab:red",
        "boost3": "tab:red",
        "ballistic": "tab:orange",
        "glide": "tab:green"
    }

    labels = {
        "boost1": "Boost Phase",
        "boost2": None,
        "boost3": None,
        "ballistic": "Ballistic Re-entry",
        "glide": "Glide Phase"
    }

    # Load missile truth data
    missile_store = np.load(os.path.join(DATA_DIR, MISSILE_STORE_FILENAME + ".npz"), allow_pickle=True)
    t_store = missile_store["t_store"]
    x_m_store = missile_store["x_store"]  # shape (N, 13)
    phase_store = missile_store["phase_store"]

    # Compute velocity magnitude
    velocity_mag = np.linalg.norm(x_m_store[:, 3:6], axis=1)

    # Plot by phase
    plotted = set()
    for phase in np.unique(phase_store):
        mask = (phase_store == phase)
        label = labels[phase] if labels[phase] and phase not in plotted else None
        plt.plot(t_store[mask], velocity_mag[mask], color=colors[phase], label=label)
        plotted.add(phase)

    # === EKF Velocity Overlay ===
    with open(os.path.join(DATA_DIR, EKF_STORE_FILENAME + ".pkl"), "rb") as f:
        ekf_store = pickle.load(f)

    mx_post = ekf_store.mx_post  # shape (13, T)
    t_ekf = ekf_store.t

    vel_ekf = np.linalg.norm(mx_post[3:6, :], axis=0)
    plt.plot(t_ekf, vel_ekf, color="black", linestyle=":", linewidth=2, label="EKF Estimate")

    # Labels and layout
    plt.xlabel("Time Elapsed [s]")
    plt.ylabel("Speed [km/s]")
    plt.grid(True)
    plt.legend()
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, "speed.pdf"))
