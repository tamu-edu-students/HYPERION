from src import download_kernels, load_kernels
import numpy as np
import spiceypy as spice

download_kernels()
load_kernels()

def get_az_el(r_M, r_S, v_S):
    """ Convert missile ECI coordinates to Azimuth and Elevation in VVLH frame. """
    # Compute Line-of-Sight (LOS) vector
    r_los = np.array(r_M) - np.array(r_S)

    # Define VVLH axes
    x_vvlh = v_S / np.linalg.norm(v_S)   # Velocity direction
    z_vvlh = -r_S / np.linalg.norm(r_S)  # Nadir direction
    y_vvlh = np.cross(z_vvlh, x_vvlh)    # Perpendicular to X and Z

    # Construct DCM (ECI to VVLH)
    eci2vvlh = np.vstack([x_vvlh, y_vvlh, z_vvlh])  # 3x3 matrix

    # Transform LOS vector to VVLH frame
    r_vvlh = eci2vvlh @ r_los
    x_prime, y_prime, z_prime = r_vvlh

    # Compute Azimuth 
    az = np.degrees(np.arctan2(y_prime, x_prime)) % 360  

    # Compute Elevation 
    el = np.degrees(np.arctan2(-z_prime, np.sqrt(x_prime**2 + y_prime**2)))

    return az, el

# Given missile position in ECF (km)
r_M_ecf = np.array([2614.831, 2355.479, 5301.482])  

# Given satellite position and velocity in ECI (km, km/s)
r_S_eci = np.array([ 6.22750823e+02,  1.01583115e+03,  7.28128931e+03])  
v_S_eci = np.array([-7.32337656e+00, 1.73571382e-01,  6.02135058e-01])  

# Convert UTC to Ephemeris Time (ET)
utc_time = "2025-02-24T16:33:50.527"
et = spice.str2et(utc_time)

# Get transformation matrix from ECF to ECI at ET
ecf2eci = spice.sxform("ITRF93", "J2000", et)

# Convert missile position from ECF to ECI
# r_M_eci = np.dot(ecf2eci[:3, :3], r_M_ecf)  # Extract position transformation
r_M_eci = np.array([-2.59197109e+03, -2.81711190e+02,  5.80145220e+03])

# Compute Azimuth and Elevation
az, el = get_az_el(r_M_eci, r_S_eci, v_S_eci)
print(f"Azimuth: {az:.2f} degrees, Elevation: {el:.2f} degrees")
# Expected az: 339.8781403120632, expected el: -30.45257393504644

# Unload SPICE kernels (clean-up)
spice.kclear()
