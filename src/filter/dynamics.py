import numpy as np
from icecream import ic

def x_dot_twobody(t: float, x: np.ndarray, mu: float) -> np.ndarray:
    """
    Computes the time derivative of the state vector for a two-body problem with thrust.

    Parameters
    -----------
    - t: Current time (unused in the dynamics).
    - x: State vector.
    - mu: Gravitational parameter of the central body.

    Returns
    -------
    - Time derivative of the state vector.
    """
    r = x[0:3]  
    v = x[3:6]  
    a_T = x[6:9]  

    dx = np.zeros_like(x)
    dx[0:3] = v  
    dx[3:6] = -mu / np.linalg.norm(r)**3 * r + a_T
    dx[6:9] = np.zeros(3)

    return dx

def x_dot_Pxx_dot_twobody(t: float, y: np.ndarray, mu: float, Fw: np.ndarray, Pww: np.ndarray) -> np.ndarray:
    """
    Computes the time derivative of the state and covariance for a two-body problem with process noise.

    Parameters
    ----------  
    - t: Current time (unused in the dynamics).
    - y: Flattened state and covariance vector.
    - mu: Gravitational parameter of the central body.
    - Fw: Process noise mapping matrix.
    - Pww: Process noise covariance.

    Returns
    -------
    - Time derivative of the state and covariance.
    """
    mx = y[:6]  
    Pxx = y[6:].reshape(6, 6) 

    r = mx[0:3]  
    v = mx[3:6]  
    # a_T = mx[6:9] 

    r_norm = np.linalg.norm(r) 

    dy = np.zeros_like(y)
    dy[0:3] = v  
    dy[3:6] = -mu / r_norm**3 * r #+ a_T
    # dy[6:9] = np.zeros(3)

    # Compute gravity Jacobian (G)
    G = (mu / r_norm**5) * (3 * np.outer(r, r) - (r_norm**2) * np.eye(3))

    # Construct state transition matrix
    Fx = np.zeros((6, 6))
    Fx[0:3, 3:6] = np.eye(3)
    Fx[3:6, 0:3] = G
    # Fx[3:6, 6:9] = np.eye(3)

    # Covariance propagation
    FxPxx = Fx @ Pxx 
    dPxx = FxPxx + FxPxx.T + Fw @ Pww @ Fw.T  
    dy[6:] = dPxx.flatten()

    return dy

def x_dot_Pxx_dot_kinematic(t: float, y: np.ndarray, Fw: np.ndarray, Pww: np.ndarray) -> np.ndarray:
    """
    Propagates a constant-velocity model with additive process noise.

    Parameters
    ----------
    - t: Time.
    - y: Flattened state and covariance vector.
    - Fw: Process noise mapping matrix.
    - Pww: Process noise covariance.

    Returns
    -------
    - Time derivative of the state and covariance vector.
    """
    mx = y[:6]  
    Pxx = y[6:].reshape(6, 6)

    r = mx[0:3]
    v = mx[3:6]

    dy = np.zeros_like(y)
    dy[0:3] = v     
    dy[3:6] = np.zeros(3)  # Constant velocity

    Fx = np.zeros((6, 6))
    Fx[0:3, 3:6] = np.eye(3)  

    # Covariance propagation
    FxPxx = Fx @ Pxx
    dPxx = FxPxx + FxPxx.T + Fw @ Pww @ Fw.T
    dy[6:] = dPxx.flatten()

    return dy

def x_dot_Pxx_dot_hypersonic(t: float, y: np.ndarray, Qs: np.ndarray, nom_params: list[float]) -> np.ndarray:
    """
    Propagates using the hypersonic missile dynamics model as defined in Tracy & Wright 2020, Acton 2014, and  Wright 2014.
    
    Parameters
    ----------
    - t: Current time in seconds (used for integration)
    - y: 13x1 State vector and 169x1 flattened covariance matrix. The state vector is ordered as follows:
        - r: Inertial position vector [x, y, z] in km
        - v: Inertial velocity vector [vx, vy, vz] in km/s
        - m: Mass of the missile in kg
        - delta_T: Thrust deviation from nominal in kN
        - delta_Isp: Specific impulse deviation from nominal in seconds
        - delta_beta: Ballistic coefficient deviation from nominal in kg/km^2
        - delta_rho0: Sea-level density deviation from nominal in kg/km^3
        - delta_kp: Scale height (decay constant) deviation from nominal in km
        - delta_lambda: The L/D ratio deviation from nominal
    - Qs: Process noise spectral density matrix
    - nom_params: The nominal parameters used for deviation states, ordered as follows:
        - T_bar: Nominal thrust in kN
        - Isp_bar: Nominal specific impulse in seconds
        - beta_bar: Nominal ballistic coefficient in kg/km^2
        - rho0_bar: Nominal sea-level atmospheric density in kg/km^3
        - kp_bar: Nominal exponential decay constant in km
        - lambda_bar: Nominal L/D ratio

    Returns
    -------
    The time derivative of the state vector and covariance.
    """
    mx = y[:13]
    Pxx = y[13:].reshape(13, 13)

    r = mx[0:3]
    v = mx[3:6]
    m = mx[6]
    delta_T, delta_Isp, delta_beta, delta_rho0, delta_kp, delta_lambda = mx[7:]

    T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, lambda_bar = nom_params

    T = T_bar + delta_T
    Isp = Isp_bar + delta_Isp
    beta = beta_bar + delta_beta
    rho0 = rho0_bar + delta_rho0
    kp = kp_bar + delta_kp
    lambda_ = lambda_bar + delta_lambda

    r_mag = np.linalg.norm(r)
    v_mag = np.linalg.norm(v)

    h = r_mag - 6.378137e3 # Altitude above Earth surface (km)
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

    h = r_mag - 6.378137e3  # altitude (km)

    # Lift in plane of velocity and local vertical, perpendicular to velocity
    lift_dir = np.cross(np.cross(v_hat, r_hat), v_hat)

    lift_dir = np.cross(np.cross(v_hat, r_hat), v_hat)
    lift_dir_norm = np.linalg.norm(lift_dir)

    if lift_dir_norm > 1e-8:
        lift_dir /= lift_dir_norm
    else:
        lift_dir = np.zeros_like(lift_dir)

    L = lambda_ * D_mag * lift_dir
    a_L = L / m

    # Gravity
    a_g = (-3.986004415e5 / r_mag**3) * r

    # === Time derivatives ===
    dx = np.zeros_like(x)
    dx[0:3] = v
    dx[3:6] = a_T + a_D + a_L + a_g
    dx[6] = -T / (9.8066 * Isp)
    dx[7:] = 0  # Deviation states are considered constant
