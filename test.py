from src import download_kernels
import numpy as np
import spiceypy as spice

download_kernels()

# Load required SPICE kernels
spice.furnsh("data/spice/naif0012.tls")  # Leap second kernel (LSK)
spice.furnsh("data/spice/pck00010.tpc")  # Earth orientation model
spice.furnsh("data/spice/earth_latest_high_prec.bpc")  # High-precision Earth orientation binary PCK
spice.furnsh("data/spice/de430.bsp")  # Planetary ephemeris kernel

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
r_S_eci = np.array([2615.971, 945.956, 6833.650])  
v_S_eci = np.array([-6.872514, 0.399969, 2.575482])  

# Convert UTC to Ephemeris Time (ET)
utc_time = "2025-02-24T16:33:50.527"
et = spice.str2et(utc_time)

# Get transformation matrix from ECF to ECI at ET
ecf2eci = spice.sxform("ITRF93", "J2000", et)

# Convert missile position from ECF to ECI
r_M_eci = np.dot(ecf2eci[:3, :3], r_M_ecf)  # Extract position transformation

# Compute Azimuth and Elevation
az, el = get_az_el(r_M_eci, r_S_eci, v_S_eci)
print(f"Azimuth: {az:.2f} degrees, Elevation: {el:.2f} degrees")

# Unload SPICE kernels (clean-up)
spice.kclear()
