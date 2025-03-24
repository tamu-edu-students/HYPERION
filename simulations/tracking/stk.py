"""
`stk.py`

Host all STK integration and data extraction here.
"""
from src import *
import numpy as np
import os
from .constants import *

def stkmain(root):
    sensors = makeConstellation(root, "LEOSats", 1000, 82, 30, 5, 3, 3, 120, "tracking")

    chain = Chain(root, "Sensors2Missile")
    chain.loadObject()
    chain.addToObject(sensors)

    launch_site = Site(62.96, 40.683, "Arkhangelsk Oblast", "Russia")
    target_site = Site(38.8977, -77.0365, "Washington, DC", "United States")

    missile_name = "Missile"
    missile = Missile(root, name=missile_name, launch_site=launch_site, target_site=target_site, launch_time="19 Mar 2025 22:21:50.000", Mach=10, h_max=100)
    missile.loadObject()

    # Extract ECI Position and Velocity
    missile_t_store, missile_x_store = missile.getECIState()

    np.savez(os.path.join(DATA_DIR, MISSILE_STORE_FILENAME), t_store=missile_t_store, x_store=missile_x_store)

    print("Saved ground truth.")

    # Iterate over all satellites and attach sensors to the missile
    scenario = root.CurrentScenario
    for i in range(scenario.Children.Count):
        obj = scenario.Children.Item(i)

        # Check if the object is a satellite
        if obj.ClassType == AgESTKObjectType.eSatellite:
            sat_name = obj.InstanceName

            # Iterate over sensors on this satellite
            for j in range(obj.Children.Count):
                child = obj.Children.Item(j)

                # Check if the child is a sensor
                if child.ClassType == AgESTKObjectType.eSensor:
                    sensor_name = child.InstanceName

                    # Attach to existing sensor and set the missile as target
                    sensor = Sensor.attach(root, sat_name, sensor_name, "tracking")
                    if sensor:
                        sensor.addTarget(missile_name)

    chain.addToObject(missile)
    access = chain.computeIndividualAccess()

    # Convert to a list of tuples (satellite, sensor)
    sat_sensor_pairs = [(key.split('-Sensor_')[0], 'Sensor_' + key.split('-Sensor_')[1].split('-to-')[0]) for key in access.keys()]

    # Initialize lists for sensor data
    sensors_name_store = []
    sensors_t_store = []
    sensors_az_store = []
    sensors_el_store = []

    # Initialize lists for satellite data
    sats_name_store = []
    sats_t_store = []
    sats_states_store = []

    # Iterate over satellite-sensor pairs in one loop
    for sat_name, sensor_name in sat_sensor_pairs:
        # Attach to existing sensor
        sensor = Sensor.attach(root, sat_name, sensor_name, "tracking")

        # Attach to existing satellite
        sat = Satellite.attach(root, sat_name)

        # Ensure both sensor and satellite were found before proceeding
        if sensor and sat:
            # Compute azimuth and elevation angles for the missile
            sensor_t_store, sensor_az_store, sensor_el_store = sensor.computeAzEl(missile_name)

            # Append sensor data
            sensors_name_store.extend([sensor_name] * len(sensor_t_store))  # Repeat name for each measurement
            sensors_t_store.extend(sensor_t_store)
            sensors_az_store.extend(sensor_az_store)
            sensors_el_store.extend(sensor_el_store)

            # Determine the time range for the satellite's ECI extraction
            if len(sensor_t_store) > 0:
                start_time = str(sensor_t_store[0])
                end_time = str(sensor_t_store[-1])

                sat_t_store, sat_states = sat.getECIState(start_time=start_time, end_time=end_time)

                # Append satellite data
                sats_name_store.extend([sat_name] * len(sat_t_store))  # Repeat name for each measurement
                sats_t_store.extend(sat_t_store)
                sats_states_store.extend(sat_states)

    # Convert lists to NumPy arrays (use dtype=object for names)
    sensors_name_store = np.array(sensors_name_store, dtype=object)
    sensors_t_store = np.array(sensors_t_store)
    sensors_az_store = np.array(sensors_az_store)
    sensors_el_store = np.array(sensors_el_store)

    sats_name_store = np.array(sats_name_store, dtype=object)
    sats_t_store = np.array(sats_t_store)
    sats_states_store = np.array(sats_states_store)

    # Sort sensor data by time
    sort_indices = np.argsort(sensors_t_store)
    sensors_name_store = sensors_name_store[sort_indices]
    sensors_t_store = sensors_t_store[sort_indices]
    sensors_az_store = sensors_az_store[sort_indices]
    sensors_el_store = sensors_el_store[sort_indices]

    # Sort satellite data by time
    sort_indices = np.argsort(sats_t_store)
    sats_name_store = sats_name_store[sort_indices]
    sats_t_store = sats_t_store[sort_indices]
    sats_states_store = sats_states_store[sort_indices]

    print(f"Total sensor measurements collected: {len(sensors_t_store)}")
    print(f"Total satellite states collected: {len(sats_t_store)}")

    # Save sensor measurements
    np.savez(os.path.join(DATA_DIR, SENSOR_STORE_FILENAME), name_store=sensors_name_store, t_store=sensors_t_store, az_store=sensors_az_store, el_store=sensors_el_store)

    # Save satellite states
    np.savez(os.path.join(DATA_DIR, SAT_STORE_FILENAME), name_store=sats_name_store, t_store=sats_t_store, x_store=sats_states_store)

    return
