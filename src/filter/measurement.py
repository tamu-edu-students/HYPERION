import numpy as np

def h_az_el(x_m: np.ndarray, x_s: np.ndarray) -> np.ndarray:
    """
    Given the missile and satellite state vectors, computes the azimuth and elevation angles.
    
    Parameters
    ----------
    - x_m: The missile state vector represented in the ECI frame.
    - x_s: The satellite state vector represented in the ECI frame.

    Returns
    -------
    - An array containing the resulting azimuth and elevation angles [rad].
    """
    r_m = x_m[0:3]
    r_s = x_s[0:3]
    v_s = x_s[3:6]

    # Compute the LOS vector
    r_los = r_m - r_s 

    # VVLH DCM
    x_vvlh = v_s / np.linalg.norm(v_s) # Velocity direction
    z_vvlh = -r_s / np.linalg.norm(r_s) # Nadir direction
    y_vvlh = np.cross(z_vvlh, x_vvlh) # Complete the dextral triad 

    eci2vvlh = np.vstack([x_vvlh, y_vvlh, z_vvlh])

    # Transform to VVLH
    r_vvlh = eci2vvlh @ r_los 
    x_prime, y_prime, z_prime = r_vvlh 

    # Azimuth
    az = np.arctan2(y_prime, x_prime)

    # Elevation
    el = np.arctan2(-z_prime, np.sqrt(x_prime**2 + y_prime**2))

    return np.array([az, el])

def H_az_el(x_m: np.ndarray, x_s: np.ndarray) -> np.ndarray:
    """
    Given the missile and satellite state vectors, computes the measurement Jacobian for azimuth and elevation measurements.

    Parameters
    ----------
    - x_m: The missile state vector represented in the ECI frame.
    - x_s: The satellite state vector represented in the ECI frame.

    Returns
    -------
    - H: The measurement Jacobian matrix.
    """
    r_m = x_m[0:3]  
    r_s = x_s[0:3]  
    v_s = x_s[3:6]  

    # Compute the LOS vector 
    r_los = r_m - r_s

    # VVLH DCM
    x_vvlh = v_s / np.linalg.norm(v_s)  # Velocity direction
    z_vvlh = -r_s / np.linalg.norm(r_s)  # Nadir direction
    y_vvlh = np.cross(z_vvlh, x_vvlh)  # Complete the dextral triad

    eci2vvlh = np.vstack([x_vvlh, y_vvlh, z_vvlh])

    # Transform to VVLH
    r_vvlh = eci2vvlh @ r_los
    x_prime, y_prime, z_prime = r_vvlh

    # Compute the Jacobian of h with respect to r'
    rxy = x_prime**2 + y_prime**2
    rho = np.sqrt(x_prime**2 + y_prime**2 + z_prime**2)

    dH_dr_vvlh = np.array([
        [-y_prime / rxy, x_prime / rxy, 0],
        [x_prime * z_prime / (rxy * rho),
         y_prime * z_prime / (rxy * rho),
         -np.sqrt(rxy) / (rho**2)]
    ])

    dr_dx_m = np.hstack([eci2vvlh, np.zeros((3, 10))]) 

    H = dH_dr_vvlh @ dr_dx_m
    
    return H
