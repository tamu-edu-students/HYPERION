import numpy as np
import sympy as sym
from icecream import ic

_F_HYPERSONIC_FUNC = None

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
    # Constants
    mu = 3.986004415e5   # km^3/s^2
    g0 = 9.8066          # m/s^2
    RE = 6378.137        # km

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

    h = r_mag - RE # Altitude above Earth surface (km)
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

    h = r_mag - RE  # altitude (km)

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
    a_g = (-mu / r_mag**3) * r

    # === Time derivatives ===
    dy = np.zeros_like(y)
    dy[0:3] = v
    dy[3:6] = a_T + a_D + a_L + a_g
    dy[6] = -T * 1000 / (g0 * Isp)
    dy[7:13] = 0  # Deviation states are considered constant

    # === Jacobian ===
    global _F_HYPERSONIC_FUNC
    if _F_HYPERSONIC_FUNC is None:
        _F_HYPERSONIC_FUNC = get_F_hypersonic_numeric()

    # Flatten lift_dir into 3 components
    l1, l2, l3 = lift_dir.tolist()

    # Evaluate Jacobian numerically
    Fx = _F_HYPERSONIC_FUNC(mx, T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, lambda_bar, mu, g0, RE, l1, l2, l3)

    # === Covariance propagation ===
    FxPxx = Fx @ Pxx
    dPxx = FxPxx + FxPxx.T + Qs

    dy[13:] = dPxx.flatten()

    return dy

def get_symbols():
    # Position and velocity
    x, y, z = sym.symbols('x y z')
    vx, vy, vz = sym.symbols('vx vy vz')

    # Mass and deviation states
    m = sym.Symbol('m')
    delta_T, delta_Isp, delta_beta = sym.symbols('delta_T delta_Isp delta_beta')
    delta_rho0, delta_kp, delta_lambda = sym.symbols('delta_rho0 delta_kp delta_lambda')

    # Nominal parameters
    T_bar, Isp_bar, beta_bar = sym.symbols('T_bar Isp_bar beta_bar')
    rho0_bar, kp_bar, lambda_bar = sym.symbols('rho0_bar kp_bar lambda_bar')

    # Constants
    mu = sym.Symbol('mu')
    g0 = sym.Symbol('g0')
    RE = sym.Symbol('RE')  # Earth radius

    # Derived quantities
    r_vec = sym.Matrix([x, y, z])
    v_vec = sym.Matrix([vx, vy, vz])
    r = sym.sqrt(x**2 + y**2 + z**2)
    v = sym.sqrt(vx**2 + vy**2 + vz**2)

    h = r - RE

    # Perturbed parameters
    T = T_bar + delta_T
    Isp = Isp_bar + delta_Isp
    beta = beta_bar + delta_beta
    rho0 = rho0_bar + delta_rho0
    kp = kp_bar + delta_kp
    lambda_ = lambda_bar + delta_lambda

    rho = rho0 * sym.exp(-h / kp)

    v_hat = v_vec / v

    # Thrust
    a_T = (T / m) * v_hat

    # Drag
    a_D = (-rho * v / (2 * beta)) * v_vec
    D = a_D * m
    D_mag = sym.sqrt(D.dot(D))

    # Lift direction (treat as constant)
    l1, l2, l3 = sym.symbols('l1 l2 l3')
    l_hat = sym.Matrix([l1, l2, l3])

    L = lambda_ * D_mag * l_hat
    a_L = L / m

    # Gravity
    a_g = (-mu / r**3) * r_vec

    # Mass flow rate (rocket equation)
    m_dot = -T * 1000 / (g0 * Isp)

    # Full state vector
    x_vec = sym.Matrix([x, y, z, vx, vy, vz, m, delta_T, delta_Isp, delta_beta, delta_rho0, delta_kp, delta_lambda])

    # Time derivative of state vector
    dx = sym.Matrix.zeros(13, 1)
    dx[0:3, 0] = v_vec
    dx[3:6, 0] = a_T + a_D + a_L + a_g
    dx[6, 0] = m_dot
    # Deviation states are constant (derivatives are zero)

    return x_vec, dx

def get_F_hypersonic_numeric():
    # Step 1: Get symbolic state vector and Jacobian
    x_vec, dx = get_symbols()
    F = dx.jacobian(x_vec)

    # Step 2: List all symbolic variables in the same order you'll use them
    T_bar, Isp_bar, beta_bar = sym.symbols('T_bar Isp_bar beta_bar')
    rho0_bar, kp_bar, lambda_bar = sym.symbols('rho0_bar kp_bar lambda_bar')
    mu, g0, RE = sym.symbols('mu g0 RE')
    l1, l2, l3 = sym.symbols('l1 l2 l3')

    # Step 3: Create callable using lambdify
    F_func = sym.lambdify(
        [x_vec, T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, lambda_bar, mu, g0, RE, l1, l2, l3],
        F,
        modules='numpy'
    )

    return F_func

def check_hypersonic_jacobian(eps: float = 1e-6):
    # Example nominal state
    x = np.array([
        2820.18, -681.82, 5679.99,      # position [km]
        -0.03, 0.62, 0.78,              # velocity [km/s]
        85000,                          # mass [kg]
        0, 0, 0, 0, 0, 0                # deviation states
    ])
    
    nom_params = [200, 300, 10, 1.225e-3, 7.2, 0.5]           # T_bar, Isp_bar, ...
    constants = [3.986004415e5, 9.8066, 6378.137]             # mu, g0, RE
    l_hat = [1, 1, 1]                                         # dummy normalized vector

    # Get the analytical Jacobian
    F_func = get_F_hypersonic_numeric()
    Fx_analytic = F_func(x, *nom_params, *constants, *l_hat)

    # Define a function for the dynamics 
    def f(x_perturbed):
        y = np.hstack([x_perturbed, np.zeros(13 * 13)])
        Qs = np.zeros((13, 13))
        dy = x_dot_Pxx_dot_hypersonic(0.0, y, Qs, nom_params)
        return dy[:13]  


    # Finite difference Jacobian
    Fx_fd = np.zeros((13, 13))
    for i in range(13):
        dx_i = np.zeros(13)
        dx_i[i] = eps
        f_plus = f(x + dx_i)
        f_minus = f(x - dx_i)
        Fx_fd[:, i] = (f_plus - f_minus) / (2 * eps)

    ic(Fx_analytic[:3, 3:6])
    ic(Fx_fd[:3, 3:6])

    # Report
    diff = Fx_analytic - Fx_fd
    print("Max abs diff:", np.max(np.abs(diff)))
    print("Mean abs diff:", np.mean(np.abs(diff)))

    np.set_printoptions(precision=4, suppress=True)
    print("Difference matrix:\n", diff)

if __name__ == "__main__":
    check_hypersonic_jacobian()