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
    mx = y[:9]  
    Pxx = y[9:].reshape(9, 9) 

    r = mx[0:3]  
    v = mx[3:6]  
    a_T = mx[6:9] 

    r_norm = np.linalg.norm(r) 

    dy = np.zeros_like(y)
    dy[0:3] = v  
    dy[3:6] = -mu / r_norm**3 * r + a_T
    dy[6:9] = np.zeros(3)

    # Compute gravity Jacobian (G)
    G = (mu / r_norm**5) * (3 * np.outer(r, r) - (r_norm**2) * np.eye(3))

    # Construct state transition matrix
    Fx = np.zeros((9, 9))
    Fx[0:3, 3:6] = np.eye(3)
    Fx[3:6, 0:3] = G
    Fx[3:6, 6:9] = np.eye(3)

    # Covariance propagation
    FxPxx = Fx @ Pxx 
    dPxx = FxPxx + FxPxx.T + Fw @ Pww @ Fw.T  
    dy[9:] = dPxx.flatten()

    return dy