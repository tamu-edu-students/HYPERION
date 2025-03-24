"""
`simulate.py`

This is where the filter and simulation logic is hosted.
"""
import os
import numpy as np
import time 
import pickle
from scipy.optimize import minimize
from icecream import ic
from scipy.integrate import solve_ivp
from .constants import *
from src import *

def propagate(mxkm1_post, Pxxkm1_post, tkm1, tk, Pww):
    dt = tk - tkm1

    # Process noise mapping matrix Fw
    Fw = np.vstack([
        np.diag([0.5 * dt**2] * 3),
        np.diag([dt] * 3)
    ])  # shape (6, 3)

    # Flatten state and covariance into a single vector
    y0 = np.hstack([mxkm1_post, Pxxkm1_post.flatten()])

    # Define wrapper to pass parameters into the ODE
    def ode(t, y):
        return x_dot_Pxx_dot_kinematic(t, y, Fw, Pww)
        # return x_dot_Pxx_dot_twobody(t, y, mu, Fw, Pww)

    # Integrate from tkm1 to tk
    sol = solve_ivp(ode, (tkm1, tk), y0, method='RK45', rtol=1e-8, atol=1e-10)

    yk = sol.y[:, -1]
    mxk_prior = yk[:6]
    Pxxk_prior = yk[6:].reshape(6, 6)

    return mxk_prior, Pxxk_prior

def run_ekf(sigma_az=None, sigma_el=None, sigma_a=None, error=None):
    # np.random.seed(0)
    print(f"Starting simulation...")
    
    start = time.time()

    missile_store = np.load(os.path.join(DATA_DIR, MISSILE_STORE_FILENAME+".npz"), allow_pickle=True)
    sat_store = np.load(os.path.join(DATA_DIR, SAT_STORE_FILENAME+".npz"), allow_pickle=True)
    sensor_store = np.load(os.path.join(DATA_DIR, SENSOR_STORE_FILENAME+".npz"), allow_pickle=True)

    dim_state = 6
    dim_meas = 2

    # Missile
    t_store = missile_store["t_store"]
    x_m_store = missile_store["x_store"]

    # Satellite
    x_s_store = np.vstack([np.full((1, dim_state), np.nan), sat_store["x_store"]])

    # Sensor
    tz_store = np.insert(sensor_store["t_store"], 0, sensor_store["t_store"][0] - 3)
    az_store = np.insert(sensor_store["az_store"], 0, np.nan)
    el_store = np.insert(sensor_store["el_store"], 0, np.nan)

    num_meas = len(tz_store)

    t0 = tz_store[0] - t_store[0] 
    obs_x0 = x_s_store[0]
    tgt_x0 = x_m_store[np.argmin(np.abs(t_store - tz_store[0]))]

    # Define standard deviations
    sigma_r = m2km(100) # km
    sigma_v = m2km(1) # km/s

    if sigma_a is None:
        sigma_a = m2km(10) # km/s^2

    # Construct initial covariance matrix
    Pxx0 = np.diag([sigma_r**2]*3 + [sigma_v**2]*3)

    if error is None:
        mx0 = tgt_x0 + np.random.multivariate_normal(np.zeros(6), Pxx0)
    else:
        mx0 = tgt_x0 + error

    # Process noise
    Pww = np.diag([sigma_a**2, sigma_a**2, sigma_a**2])

    if sigma_az is None:
        sigma_az = np.deg2rad(0.5)
    if sigma_el is None:
        sigma_el = np.deg2rad(0.5)
    
    # Measurement noise
    Hv = np.eye(2)
    Pvv = np.diag([sigma_az**2, sigma_el**2])

    ekf_store = EKFStore.initialize(dim_state, dim_meas, num_meas)
    ekf_store.t = tz_store - t_store[0]

    # Initialize per-iteration values 
    mxk_prior = np.full(dim_state, np.nan)
    Pxxk_prior = np.full((dim_state, dim_state), np.nan)

    mzk_prior = np.full(dim_meas, np.nan)
    Pxzk_prior = np.full((dim_meas, dim_meas), np.nan)
    Pzzk_prior = np.full((dim_meas, dim_meas), np.nan)
    Kk = np.full((dim_state, dim_meas), np.nan)

    mxk_post = np.full(dim_state, np.nan)
    Pxxk_post = np.full((dim_state, dim_state), np.nan)

    tkm1 = t0
    mxkm1_post = mx0
    Pxxkm1_post = Pxx0
    obs_xk = obs_x0
    tgt_xk = tgt_x0

    # Store initial values
    ekf_store.mx[:, 1] = ekf_store.mx_post[:, 0] = mx0
    ekf_store.Pxx[:, :, 1] = ekf_store.Pxx_post[:, :, 0] = Pxx0
    ekf_store.ex[:, 1] = ekf_store.ex_post[:, 0] = tgt_x0 - mx0
    ekf_store.sx[:, 1] = ekf_store.sx_post[:, 0] = np.sqrt(np.diag(Pxx0))

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

        # Mean state 
        if tk - tkm1 == 0.0:
            mxk_prior = mxkm1_post
            Pxxk_prior = Pxxkm1_post
        else:
            mxk_prior, Pxxk_prior = propagate(mxkm1_post, Pxxkm1_post, tkm1, tk, Pww)

        ### Update ###
        # zk = np.deg2rad(np.array([az_store[k], el_store[k]])) + np.random.multivariate_normal(np.zeros(2), Pvv)
        zk = h_az_el(tgt_xk, obs_xk) + np.random.multivariate_normal(np.zeros(2), Pvv)
        
        mzk_prior = h_az_el(mxk_prior, obs_xk)

        Hxk = H_az_el(mxk_prior, obs_xk)
        Pxzk_prior = Pxxk_prior @ Hxk.T 
        Pzzk_prior = Hxk @ Pxxk_prior @ Hxk.T + Hv @ Pvv @ Hv.T
        Kk = Pxzk_prior @ np.linalg.inv(Pzzk_prior)
        mxk_post = mxk_prior + Kk @ (zk - mzk_prior)
        Pxxk_post = (np.eye(dim_state) - Kk @ Hxk) @ Pxxk_prior

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

    print(f"Simulation completed after {duration:.2f} s.")

    return np.mean(nees_store)

def optimize_noise():
    def score(params):
        sigma_az, sigma_el, sigma_a = params
        mean_nees = run_ekf(sigma_az=np.deg2rad(sigma_az), sigma_el=np.deg2rad(sigma_el), sigma_a=m2km(sigma_a))
        print(f"Params: {params}, Mean NEES: {mean_nees:.3f}")
        return mean_nees

    initial_guess = [0.5, 0.5, 10]  # deg, deg, m/s^2
    bounds = [(0.01, 5), (0.01, 5), (1e-4, 100)] 

    try:
        result = minimize(score, initial_guess, bounds=bounds, method='L-BFGS-B')
    except KeyboardInterrupt:
        print("\nOptimization interrupted.")

    print("Optimal parameters:", result.x)
    print("Minimum mean NEES:", result.fun)

def run_monte_carlo(num_samples=1000):
    print(f"Running Monte Carlo with {num_samples} samples...")

    dim_state = 6
    sigma_r = m2km(100)
    sigma_v = m2km(1)
    Pxx0 = np.diag([sigma_r**2]*3 + [sigma_v**2]*3)

    # Eigen-decomposition
    S, V = np.linalg.eigh(Pxx0)
    sqrt_S = np.diag(np.sqrt(S))

    # Generate samples
    zetas = np.random.randn(num_samples, dim_state)
    error_vectors = np.array([V @ sqrt_S @ zeta for zeta in zetas])

    # Run EKF for each sample
    ex_post_samples = []
    for j, error in enumerate(error_vectors):
        print(f"Sample {j+1}/{num_samples}")
        
        run_ekf(error=error) 
        
        with open(os.path.join(DATA_DIR, EKF_STORE_FILENAME + ".pkl"), "rb") as f:
            ekf_store = pickle.load(f)
            ex_post_samples.append(ekf_store.ex_post.copy())

    ex_post_matrix = np.stack(ex_post_samples, axis=-1)  # shape: (6, T, N)

    ex_sample_mean = np.mean(ex_post_matrix, axis=-1)  # shape: (6, T)
    sx_sample = np.std(ex_post_matrix, axis=-1, ddof=1)

    with open(os.path.join(DATA_DIR, EKF_STORE_FILENAME + ".pkl"), "rb") as f:
        ekf_store = pickle.load(f)
        t = ekf_store.t
        sx_ekf = ekf_store.sx_post

    with open(os.path.join(DATA_DIR, MONTE_CARLO_FILENAME + ".pkl"), "wb") as f:
        pickle.dump({
            "t": t,
            "ex_sample": ex_sample_mean,
            "sx_sample": sx_sample,
            "sx_ekf": sx_ekf
        }, f)

    print("Monte Carlo completed and results saved.")
