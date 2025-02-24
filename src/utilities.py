from .objects import *

# Constants
mu_E = 3.986004415e5  # km^3 / s^2
r_E = 6.378137e3  # km

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

def makeConstellation(root, name, h, i, t, p, f, FoV=None):
    """
    Creates a Walker constellation with attached sensors and adds to a constellation object. Optionally, sensors can be added to each satellite by specifying the sensor field of view.

    Parameters:
    - root: The STK root object.
    - name (str): Name of the constellation.
    - h (float): Altitude above Earth's surface in km.
    - i (float): Orbital inclination in degrees.
    - t (int): Total number of satellites.
    - p (int): Number of orbital planes.
    - f (int): Phasing factor for the constellation.
    - FoV (float): Field of view of the sensor in degrees.

    Returns:
    - Constellation object.
    """
    # Classical orbital elements and Walker parameters
    a = h + r_E  # km
    omega = 0  # deg
    e = 0
    Omega_0 = 0  # deg
    M_0 = 0  # deg

    delta_M = (f * 360) / t  # Change in mean anomaly for equivalent satellites
    sats_per_plane = t // p

    # Create constellation
    if FoV is not None:
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

            if FoV is not None:
                sensor_name = f"{name}Sensor"
                sensor = Sensor(root, sat_name, sensor_name, FoV)
                sensor.loadObject()
                constellation.addToObject(sensor)
            else:
                constellation.addToObject(satellite)

    return constellation