"""
`simulate.py`

This is where the filter and simulation logic is hosted.
"""
import datetime
import os
import numpy as np
import time 
import pickle
from scipy.optimize import minimize
from icecream import ic
from scipy.integrate import solve_ivp
from .constants import *
from src import *

def propagate(mxkm1_post: np.ndarray, Pxxkm1_post: np.ndarray, Qs: np.ndarray, nom_params: list[float], tkm1, tk) -> tuple[np.ndarray, np.ndarray]:
    y0 = np.hstack([mxkm1_post, Pxxkm1_post.flatten()])

    def ode(t, y):
        return x_dot_Pxx_dot_hypersonic(t, y, Qs, nom_params, tkm1)
    
    sol = solve_ivp(ode, (tkm1, tk), y0, method='RK45', rtol=1e-8, atol=1e-10)

    yk = sol.y[:, -1]
    mxk_prior = yk[:13]
    Pxxk_prior = yk[13:].reshape(13, 13)

    return mxk_prior, Pxxk_prior

def get_least_used_sensors(sensor_store):
    """Returns a list of all sensor names sorted by ascending usage count."""
    name_store = sensor_store["name_store"]
    unique, counts = np.unique(name_store, return_counts=True)
    sorted_sensors = sorted(zip(unique, counts), key=lambda x: x[1])
    return [name for name, _ in sorted_sensors]

def run_ekf(meas_noise: list=None, process_noise: list=None, ex0: np.ndarray=None, exclude_sensors=None) -> float:
    # np.random.seed(0)
    print(f"Running EKF...")
    
    start = time.time()

    missile_store = np.load(os.path.join(DATA_DIR, MISSILE_STORE_FILENAME+".npz"), allow_pickle=True)
    sat_store = np.load(os.path.join(DATA_DIR, SAT_STORE_FILENAME+".npz"), allow_pickle=True)
    sensor_store = np.load(os.path.join(DATA_DIR, SENSOR_STORE_FILENAME+".npz"), allow_pickle=True)

    dim_state_estimate = 13 # Full state
    dim_state = 6 # Position & velocity
    dim_meas = 2

    # Missile
    t_store = missile_store["t_store"]
    x_m_store = missile_store["x_store"]
    phase_store = missile_store["phase_store"]

    # Parse both times
    fmt = "%d %b %Y %H:%M:%S.%f"
    sim_start_dt = datetime.datetime.strptime(SIM_START_TIME[:26], fmt)
    launch_dt = datetime.datetime.strptime(LAUNCH_TIME, fmt)

    offset = (launch_dt - sim_start_dt).total_seconds() #s

    # Shift 
    t_store += offset

    # Satellite
    x_s_store = np.vstack([np.full((1, dim_state), np.nan), sat_store["x_store"]])

    # Sensor
    sensor_store = np.load(os.path.join(DATA_DIR, SENSOR_STORE_FILENAME+".npz"), allow_pickle=True)

    name_store = sensor_store["name_store"]
    tz_store = sensor_store["t_store"]
    az_store = sensor_store["az_store"]
    el_store = sensor_store["el_store"]

    # Filter out excluded sensors
    if exclude_sensors is not None and len(exclude_sensors) > 0:
        mask = ~np.isin(name_store, exclude_sensors)
        name_store = name_store[mask]
        tz_store = tz_store[mask]
        az_store = az_store[mask]
        el_store = el_store[mask]

    num_meas = len(tz_store)

    t0 = tz_store[0] - t_store[0] 
    obs_x0 = x_s_store[0]

    tgt_idx0 = np.argmin(np.abs(t_store - tz_store[0]))
    tgt_x0 = x_m_store[tgt_idx0]

    # Define standard deviations
    sigma_r = m2km(1000)    # km
    sigma_v = m2km(10)      # km/s
    sigma_m = 1e-9             # kg
    sigma_T = 50            # kN
    sigma_Isp = 50          # s
    sigma_beta = 1e-9          # kg/km^2
    sigma_rho0 = 1e-9          # kg/km^3
    sigma_kp = 1e-9            # km
    sigma_lambda = 0.2      # dimensionless

    # Construct initial covariance matrix
    # r, v, m, delta_T, delta_Isp, delta_beta, delta_rho0, delta_kp, delta_lambda
    Pxx0 = np.diag([
        sigma_r**2, sigma_r**2, sigma_r**2,
        sigma_v**2, sigma_v**2, sigma_v**2,
        sigma_m**2,
        sigma_T**2,
        sigma_Isp**2,
        sigma_beta**2,
        sigma_rho0**2,
        sigma_kp**2,
        sigma_lambda**2
    ])
    # Pxx0 = np.zeros((13, 13))

    if ex0 is None:
        mx0 = tgt_x0 + np.random.multivariate_normal(np.zeros(dim_state_estimate), Pxx0)
    else:
        mx0 = tgt_x0 + ex0

    # Nominal parameters
    T_bar = 209 * G0     # kN
    Isp_bar = 259        # s
    beta_bar = 1.3e10    # kg/km^2
    rho0_bar = 1.46e9    # kg/km^3
    kp_bar = 6.970       # km
    lambda_bar = 0       # dimensionless

    nom_params = [T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, lambda_bar]

    # Unmodeled acceleration
    if process_noise is None:
        q_ax = q_ay = q_az = 1e-7 # km^2/s^5
    else:
        q_ax, q_ay, q_az = process_noise

    # Process noise
    Qs = np.diag([0, 0, 0, q_ax, q_ay, q_az, 0, 0, 0, 0, 0, 0, 0])
    
    if meas_noise is None:
        sigma_az = sigma_el = asc2rad(3)
    else:
        sigma_az, sigma_el = meas_noise
    
    # Measurement noise
    Hv = np.eye(2)
    Pvv = np.diag([sigma_az**2, sigma_el**2])

    ekf_store = EKFStore.initialize(dim_state_estimate, dim_meas, num_meas)
    ekf_store.t = tz_store - t_store[0]

    # Initialize per-iteration values 
    mxk_prior = np.full(dim_state_estimate, np.nan)
    Pxxk_prior = np.full((dim_state_estimate, dim_state_estimate), np.nan)

    mzk_prior = np.full(dim_meas, np.nan)
    Pxzk_prior = np.full((dim_meas, dim_meas), np.nan)
    Pzzk_prior = np.full((dim_meas, dim_meas), np.nan)
    Kk = np.full((dim_state_estimate, dim_state_estimate), np.nan)

    tk = t0
    obs_xk = obs_x0
    tgt_xk = tgt_x0
    mxk_post = np.full(dim_state_estimate, np.nan)
    Pxxk_post = np.full((dim_state_estimate, dim_state_estimate), np.nan)

    tkm1 = t0
    mxkm1_post = mx0
    Pxxkm1_post = Pxx0

    # Store initial values
    ekf_store.mx[:, 0] = ekf_store.mx_post[:, 0] = mx0
    ekf_store.Pxx[:, :, 0] = ekf_store.Pxx_post[:, :, 0] = Pxx0
    ekf_store.ex[:, 0] = ekf_store.ex_post[:, 0] = tgt_x0 - mx0
    ekf_store.sx[:, 0] = ekf_store.sx_post[:, 0] = np.sqrt(np.diag(Pxx0))

    # Normalized Estimation Error Squared (NEES)
    nees_store = []

    for k in range(1, num_meas):
        tkm1 = ekf_store.t[k-1]
        mxkm1_post = ekf_store.mx_post[:, k-1]
        Pxxkm1_post = ekf_store.Pxx_post[:, :, k-1]

        tk = ekf_store.t[k] 

        ### Propagate ###
        # Observer
        obs_xk = x_s_store[k]

        # Target 
        abs_tk = tk + t_store[0]  # Convert relative EKF time to absolute STK time
        tgt_idx = np.argmin(np.abs(t_store - abs_tk))
        tgt_xk = x_m_store[tgt_idx]

        if phase_store[tgt_idx] == "boost1":
            T_bar = 209 * G0 
            Isp_bar = 259
            lambda_bar = 0
        elif phase_store[tgt_idx] == "boost2":
            T_bar = 124.7 * G0 
            Isp_bar = 309
            lambda_bar = 0
        elif phase_store[tgt_idx] == "boost3":
            T_bar = 29.48 * G0
            Isp_bar = 300 
            lambda_bar = 0
        elif phase_store[tgt_idx] == "ballistic":
            T_bar = 0
            Isp_bar = 1e6
            lambda_bar = 0
        else:
            T_bar = 0
            Isp_bar = 1e6
            lambda_bar = 1.99101

        nom_params = [T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, lambda_bar]

        # Mean state 
        if tk - tkm1 == 0.0:
            mxk_prior = mxkm1_post
            Pxxk_prior = Pxxkm1_post
        else:
            mxk_prior, Pxxk_prior = propagate(mxkm1_post, Pxxkm1_post, Qs, nom_params, tkm1, tk)

        ### Update ###
        zk = h_az_el(tgt_xk, obs_xk) + np.random.multivariate_normal(np.zeros(2), Pvv)
        
        mzk_prior = h_az_el(mxk_prior, obs_xk)

        Hxk = H_az_el(mxk_prior, obs_xk)
        Pxzk_prior = Pxxk_prior @ Hxk.T 
        Pzzk_prior = Hxk @ Pxxk_prior @ Hxk.T + Hv @ Pvv @ Hv.T
        Kk = Pxzk_prior @ np.linalg.inv(Pzzk_prior)
        mxk_post = mxk_prior + Kk @ (zk - mzk_prior)
        Pxxk_post = (np.eye(dim_state_estimate) - Kk @ Hxk) @ Pxxk_prior

        ### Store ###
        exk_prior = tgt_xk - mxk_prior
        exk_post = tgt_xk - mxk_post
        sxk_prior = np.sqrt(np.diag(Pxxk_prior))
        sxk_post = np.sqrt(np.diag(Pxxk_post))

        ekf_store.mx_prior[:, k] = mxk_prior
        ekf_store.mx_post[:, k] = mxk_post
        ekf_store.Pxx_prior[:, :, k] = Pxxk_prior
        ekf_store.Pxx_post[:, :, k] = Pxxk_post
        ekf_store.ex_prior[:, k] = exk_prior
        ekf_store.ex_post[:, k] = exk_post
        ekf_store.sx_prior[:, k] = sxk_prior
        ekf_store.sx_post[:, k] = sxk_post

        ekf_store.mx[:, 2*k - 1]  = mxk_prior 
        ekf_store.mx[:, 2*k] = mxk_post
        ekf_store.Pxx[:, :, 2*k - 1] = Pxxk_prior
        ekf_store.Pxx[:, :, 2*k] = Pxxk_post
        ekf_store.ex[:, 2*k - 1] = exk_prior
        ekf_store.ex[:, 2*k] = exk_post
        ekf_store.sx[:, 2*k - 1] = sxk_prior
        ekf_store.sx[:, 2*k] = sxk_post

        ekf_store.ez[:, k] = zk - mzk_prior
        ekf_store.sz[:, k] = np.sqrt(np.diag(Pzzk_prior))
        ekf_store.z[:, k] = zk 

        try:
            nees_k = exk_post.T @ np.linalg.inv(Pxxk_post) @ exk_post
            nees_store.append(nees_k)
        except np.linalg.LinAlgError:
            nees_store.append(np.inf)    

    end = time.time()
    duration = end - start

    with open(os.path.join(DATA_DIR, EKF_STORE_FILENAME+".pkl"), "wb") as f:
        pickle.dump(ekf_store, f)

    print(f"EKF run completed after {duration:.2f} s.")

    return np.mean(nees_store)

def optimize_noise():
    def score(params):
        sigma_az, sigma_el, sigma_a_x, sigma_a_y, sigma_a_z = params

        meas_noise = np.deg2rad([sigma_az, sigma_el])
        process_noise = m2km(np.array([sigma_a_x, sigma_a_y, sigma_a_z]))

        mean_nees = run_ekf(meas_noise=meas_noise, process_noise=process_noise)

        print(f"Params: {params}, Mean NEES: {mean_nees:.3f}")

        return mean_nees

    initial_guess = [0.5, 0.5, 4, 4, 10]  # deg, deg, m/s^2, m/s^2, m/s^2
    bounds = [(0.01, 2), (0.01, 2), (1e-1, 10), (1e-1, 10), (1e-1, 50)] 

    try:
        start = time.time()
        print("Optimizing noise params...")
        result = minimize(score, initial_guess, bounds=bounds, method='Powell')
        end = time.time()
        duration = end - start
        print(f"Optimization completed after {duration/60:.2f} min.")
    except KeyboardInterrupt:
        print("\nOptimization interrupted.")
        return

    print("Optimal parameters:", result.x)
    print("Minimum mean NEES:", result.fun)

    txt_path = os.path.join(DATA_DIR, NOISE_PARAMS_FILENAME+".txt")
    with open(txt_path, "w") as f:
        f.write("Best noise parameters (optimized):\n")
        f.write(f"Sigma Azimuth (deg): {result.x[0]:.4f}\n")
        f.write(f"Sigma Elevation (deg): {result.x[1]:.4f}\n")
        f.write(f"Sigma Ax (m/s^2): {result.x[2]:.4f}\n")
        f.write(f"Sigma Ay (m/s^2): {result.x[3]:.4f}\n")
        f.write(f"Sigma Az (m/s^2): {result.x[4]:.4f}\n")
        f.write(f"Final Mean NEES: {result.fun:.4f}\n")
        f.write(f"Total Duration: {duration/60:.2f} min\n")

def run_monte_carlo(num_samples=1000):
    start = time.time()
    print(f"Running Monte Carlo with {num_samples} samples...")

    dim_state_estimate = 13

    # Define standard deviations
    sigma_r = m2km(1000)     # km
    sigma_v = m2km(10)       # km/s
    sigma_m = 1e-9              # kg
    sigma_T = 50             # kN
    sigma_Isp = 50           # s
    sigma_beta = 1e-9           # kg/km^2
    sigma_rho0 = 1e-9           # kg/km^3
    sigma_kp = 1e-9             # km
    sigma_lambda = 0.2       # dimensionless

    # Construct initial covariance matrix
    # r, v, m, delta_T, delta_Isp, delta_beta, delta_rho0, delta_kp, delta_lambda
    Pxx0 = np.diag([
        sigma_r**2, sigma_r**2, sigma_r**2,
        sigma_v**2, sigma_v**2, sigma_v**2,
        sigma_m**2,
        sigma_T**2,
        sigma_Isp**2,
        sigma_beta**2,
        sigma_rho0**2,
        sigma_kp**2,
        sigma_lambda**2
    ])

    # Eigen-decomposition
    S, V = np.linalg.eigh(Pxx0)
    Sigma = np.diag(np.sqrt(S))

    # Generate samples
    zetas = np.random.randn(num_samples, dim_state_estimate)
    wx0_samples = np.array([V @ Sigma @ zeta for zeta in zetas])

    # Compute sample mean and covariance
    w_bar = np.mean(wx0_samples, axis=0)  
    M = np.cov(wx0_samples, rowvar=False)  

    D, Gamma = np.linalg.eigh(M)
    Delta = np.diag(np.sqrt(D))

    zx0_samples = wx0_samples - w_bar

    # Crazy formula
    R = V @ Sigma @ np.linalg.inv(Delta) @ Gamma.T

    ex0_samples = np.array([R @ zx0 for zx0 in zx0_samples])      

    # Run EKF for each sample
    ex_samples = []
    sx_samples = []
    for j, ex0 in enumerate(ex0_samples):
        print(f"Sample {j+1}/{num_samples}")

        run_ekf(ex0=ex0)
        
        with open(os.path.join(DATA_DIR, EKF_STORE_FILENAME + ".pkl"), "rb") as f:
            ekf_store = pickle.load(f)
            ex_samples.append(ekf_store.ex.copy())
            sx_samples.append(ekf_store.sx.copy())

    tz = ekf_store.tz

    ex_matrix = np.stack(ex_samples, axis=-1) 
    sx_matrix = np.stack(sx_samples, axis=-1) 

    ex_sample_mean = np.mean(ex_matrix, axis=-1)  
    sx_sample = np.std(ex_matrix, axis=-1, ddof=1)
    sx_ekf = np.mean(sx_matrix, axis=-1)

    with open(os.path.join(DATA_DIR, MONTE_CARLO_FILENAME + ".pkl"), "wb") as f:
        pickle.dump({
            "tz": tz,
            "ex_sample": ex_sample_mean,
            "sx_sample": sx_sample,
            "sx_ekf": sx_ekf
        }, f)

    end = time.time()
    duration = end - start
    print(f"Monte Carlo completed after {duration:.2f} s.")

def evaluate_sensor_degradation():
    sensor_store = np.load(os.path.join(DATA_DIR, SENSOR_STORE_FILENAME+".npz"), allow_pickle=True)
    all_least_used = get_least_used_sensors(sensor_store)

    print(f"Sensors ranked by least usage: {all_least_used}")
    input("Press enter to continue...")

    for i in range(len(all_least_used)):
        exclude = all_least_used[:i]
        print(f"\n=== Running EKF with {len(exclude)} sensor(s) excluded: {exclude} ===")
        mean_nees = run_ekf(exclude_sensors=exclude)
        print(f"Mean NEES with {len(exclude)} sensor(s) excluded: {mean_nees:.4f}")
        input("Press enter to continue...")
