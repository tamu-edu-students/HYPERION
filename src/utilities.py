import os 
import requests
import csv
import numpy as np
from agi.stk12.stkobjects import AgStkObjectRoot
from .objects import *

# Constants
MU_E = 3.986004415e5  # km^3 / s^2
R_E = 6.378137e3  # km

def clearScenario(scenario):
    while scenario.Children.Count > 0:
        children = scenario.Children
        print(f"Number of objects remaining: {children.Count}")

        for _ in range(children.Count):
            try:
                child = children.Item(0)  # Always delete the first item to avoid skipping
                print(f"Deleting object: {child.InstanceName}")
                child.Unload()
            except Exception as e:
                print(f"Failed to delete object: {e}")
                continue  # Continue if an object fails to delete

    print("All objects have been cleared.")

# TODO: generalized inspection function that can be used in simulations

def makeConstellation(root: AgStkObjectRoot, name: str, h: float, i: float, t: int, p: int, f: int, FoV: float=None, FoR: float=None, mode: str="scanning") -> Constellation:
    """
    Creates a Walker constellation with attached sensors and adds to a constellation object. Optionally, sensors can be added to each satellite by specifying the sensor field of view.

    Parameters
    ----------
    - root: The STK root object.
    - name: Name of the constellation.
    - h: Altitude above Earth's surface [km].
    - i: Orbital inclination [deg].
    - t: Total number of satellites.
    - p: Number of orbital planes.
    - f: Phasing factor for the constellation.
    - FoV: Field of view of the sensor [deg].
    - FoR: Field of regard of the sensor [deg].
    - mode: Toggle between "scanning" and "tracking" modes. If using "tracking", be sure to assign an object to be tracked.

    Returns
    --------
    - Constellation object.
    """
    # Classical orbital elements and Walker parameters
    a = h + R_E  # km
    omega = 0  # deg
    e = 0
    Omega_0 = 0  # deg
    M_0 = 0  # deg

    delta_M = (f * 360) / t  # Change in mean anomaly for equivalent satellites
    sats_per_plane = t // p

    # Create constellation
    if (FoV and FoR) is not None:
        constellation = Constellation(root, f"{name}Sensors")
    else:
        constellation = Constellation(root, name)
        
    constellation.loadObject()

    for plane in range(p):
        for sat in range(sats_per_plane):
            Omega = ((plane / p) * 360) + Omega_0
            M = (sat / sats_per_plane) * 360 + delta_M * plane + M_0

            sat_name = f"{name}_P{plane+1}_S{sat+1}"
            satellite = Satellite(root, sat_name, a, i, Omega, omega, e, M)
            satellite.loadObject()

            if (FoV and FoR) is not None:
                sensor_name = f"Sensor_P{plane+1}_S{sat+1}"
                sensor = Sensor(root, sat_name, sensor_name, FoV, FoR, mode)
                sensor.loadObject()
                constellation.addToObject(sensor)
            else:
                constellation.addToObject(satellite)

    return constellation

def download_kernel(filename : str, url: str) -> None:
    """
    Download a SPICE kernel file if it does not exist.
    """
    kernel_dir = "data/spice"

    os.makedirs(kernel_dir, exist_ok=True)

    filepath = os.path.join(kernel_dir, filename)
    
    if not os.path.exists(filepath):
        print(f"Downloading {filename}...")
        response = requests.get(url, stream=True)
        response.raise_for_status()
        
        with open(filepath, "wb") as file:
            for chunk in response.iter_content(chunk_size=8192):
                file.write(chunk)
        
        print(f"Saved: {filepath}")
    else:
        print(f"{filename} already exists. Skipping download.")

def download_kernels():
    """
    Download all required SPICE kernels and save them to 'data/spice'.
    If a kernel already exists, it will be skipped.
    """

    # Define kernel download URLs
    kernel_urls = {
        "naif0012.tls": "https://naif.jpl.nasa.gov/pub/naif/generic_kernels/lsk/naif0012.tls",
        "pck00010.tpc": "https://naif.jpl.nasa.gov/pub/naif/generic_kernels/pck/pck00010.tpc",
        "earth_latest_high_prec.bpc": "https://naif.jpl.nasa.gov/pub/naif/generic_kernels/pck/earth_latest_high_prec.bpc",
        "de430.bsp": "https://naif.jpl.nasa.gov/pub/naif/generic_kernels/spk/planets/de430.bsp",
    }

    # Define kernel storage directory
    kernel_dir = "data/spice"
    os.makedirs(kernel_dir, exist_ok=True)

    # Download all kernels
    for filename, url in kernel_urls.items():
        filepath = os.path.join(kernel_dir, filename)
        
        if not os.path.exists(filepath):
            print(f"Downloading {filename}...")
            response = requests.get(url, stream=True)
            response.raise_for_status()
            
            with open(filepath, "wb") as file:
                for chunk in response.iter_content(chunk_size=8192):
                    file.write(chunk)
            
            print(f"Saved: {filepath}")
        else:
            print(f"{filename} already exists. Skipping download.")

    print("All SPICE kernels are downloaded and saved in 'data/spice'.")

def npz_to_csv(npz_filepath: str, output_csv: str = None):
    """
    Converts a NumPy .npz file into a human-readable .csv file.

    Parameters
    ----------
    npz_filepath: Path to the .npz file to convert.
    output_csv: Path to save the .csv file (default: same name as .npz file with .csv extension).
    """
    if not npz_filepath.endswith(".npz"):
        npz_filepath += ".npz"

    data = np.load(npz_filepath, allow_pickle=True)

    # Default CSV filename if not provided
    if output_csv is None:
        output_csv = os.path.splitext(npz_filepath)[0] + ".csv"

    keys = list(data.keys())

    max_len = max(len(data[key]) for key in keys)

    # Create a row-wise structure
    csv_data = {key: list(data[key]) + [""] * (max_len - len(data[key])) for key in keys}  

    with open(output_csv, mode="w", newline="") as file:
        writer = csv.writer(file)
    
        writer.writerow(keys)
        
        for i in range(max_len):
            writer.writerow([csv_data[key][i] for key in keys])

    print(f"Converted {npz_filepath} to {output_csv}")