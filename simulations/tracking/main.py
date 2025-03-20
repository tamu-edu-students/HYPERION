"""
`main.py`

Code driver for the tracking project. Set up a main function for STK integration and run tracking optimization.
"""

import os
from icecream import ic
import matplotlib.pyplot as plt
import numpy as np
from src import *

# TODO: Refine dynamics model. Use SPICE to get ECI Cartesian representation. Propagate using 2BP directly to compare trajectory.

# Constants
mu_E = 3.986004415e5  # km^3 / s^2
r_E = 6.378137e3  # km

data_dir = os.path.abspath("data/tracking/")
figures_dir = os.path.abspath("figures/tracking")

os.makedirs(data_dir, exist_ok=True)
os.makedirs(figures_dir, exist_ok=True)

missile_store_filename = "missile_store"
sensors_store_filename = "sensors_store"
sats_store_filename = "sats_store"
sim_filename = "sim.npy"
error_filename = "error.png"

def compute_F(x, mu_E):
    """
    Computes the state transition matrix F for the given state x.

    Parameters:
    - x: State vector [r; v] where r and v are 3D vectors
    - mu_E: Gravitational parameter of Earth (km^3/s^2)

    Returns:
    - F: 6x6 state transition matrix
    """
    r = x[:3].flatten()  # Extract position vector
    r = np.linalg.norm(r)  # Compute norm of r

    if r == 0:
        raise ValueError("Position vector magnitude is zero, causing division by zero in gravity computation.")

    # Compute gravity Jacobian
    I3 = np.eye(3)
    rrT = np.outer(r, r)
    gravity_jacobian = (mu_E / r**5) * (3 * rrT - (r**2) * I3)

    # Construct F matrix
    F = np.block([
        [np.zeros((3, 3)), np.eye(3)],
        [gravity_jacobian, np.zeros((3, 3))]
    ])

    return F


def initialize(x0):
    ### Dynamics ###
    # Input
    u = np.zeros((6, 1))

    # Input matrix
    G =  np.zeros((6, 6))

    # Spectral density matrix
    qs = 0
    Qs = np.diag([0, 0, 0, qs, qs, qs])  # Small process noise on velocity

    # Create dynamics model object
    # dynamics = DynamicsModel(x0, compute_F, u, G, Qs, mu_E)

    # return dynamics

def main(root):
    sensors = makeConstellation(root, "LEOSats", 1000, 82, 30, 5, 3, 3, 120, "tracking")

    chain = Chain(root, "Sensors2Missile")
    chain.loadObject()
    chain.addToObject(sensors)

    launch_site = Site(62.96, 40.683, "Arkhangelsk Oblast", "Russia")
    target_site = Site(38.8977, -77.0365, "Washington, DC", "United States")

    missile_name = "Missile"
    missile = Missile(root, name=missile_name, launch_site=launch_site, target_site=target_site, launch_time="19 Mar 2025 22:21:50.000")
    missile.loadObject()

    # Extract ECI Position and Velocity
    missile_t_store, missile_x_store = missile.getECIState()

    np.savez(os.path.join(data_dir, missile_store_filename), t_store=missile_t_store, x_store=missile_x_store)

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
    np.savez(os.path.join(data_dir, sensors_store_filename), name_store=sensors_name_store, t_store=sensors_t_store, az_store=sensors_az_store, el_store=sensors_el_store)

    # Save satellite states
    np.savez(os.path.join(data_dir, sats_store_filename), name_store=sats_name_store, t_store=sats_t_store, x_store=sats_states_store)

    return

def simulate():
    print(f"Starting simulation...")
    
    start = time.time()

    ground_truth = np.load(os.path.join(data_dir, missile_store_filename), allow_pickle=True).item()

    # Extract true states 
    xk_ground_arr = ground_truth["states"] 
    x0 = xk_ground_arr[0].reshape(-1, 1)

    # Extract final time 
    tf = ground_truth["times"][-1]  

    # Initialize dynamics model
    dynamics = initialize(x0)

    # Simulation parameters
    tk = 0  # Current simulation time
    tkm1 = 0  # Previous simulation time
    dt = 1  # Time step size

    # Initial state
    xk = dynamics.get_x0()
    xkm1 = dynamics.get_x0()

    # Storage arrays
    tk_arr = [tk]  # Time steps for simulation
    xk_arr = [xk.flatten()]  # Store states
    wk_arr = []  # Store process noise samples (one less than states)

    while tk < tf:
        # Update time and previous state
        tkm1 = tk
        xkm1 = xk
        tk += dt  # Advance time step

        # Propagate state forward
        xk, wkm1 = dynamics.get_xk(tk, tkm1, xkm1, return_wkm1=True)

        # Store results
        xk_arr.append(xk.flatten())
        wk_arr.append(wkm1.flatten())
        tk_arr.append(tk)

    end = time.time()
    duration = end - start

    np.save(os.path.join(data_dir, sim_filename), {"times": np.array(tk_arr), "states": np.array(xk_arr), "process noise": np.array(wk_arr)})

    print(f"Simulation completed after {duration:.2f} s.")

def plotTrajectory():
    """
    Plots the ground truth and simulated missile trajectory in 3D space with the Earth at the origin.
    """
    from mpl_toolkits.mplot3d import Axes3D

    # Load ground truth and simulation data
    ground_truth = np.load(os.path.join(data_dir, missile_store_filename), allow_pickle=True).item()
    xk_ground_arr = np.array(ground_truth["states"])  # Ground truth positions

    sim = np.load(os.path.join(data_dir, sim_filename), allow_pickle=True).item()
    xk_arr = np.array(sim["states"])  # Simulated positions

    # Extract position components
    x_true, y_true, z_true = xk_ground_arr[:, 0], xk_ground_arr[:, 1], xk_ground_arr[:, 2]
    x_sim, y_sim, z_sim = xk_arr[:, 0], xk_arr[:, 1], xk_arr[:, 2]

    # Create 3D figure
    fig = plt.figure(figsize=(10, 8))
    ax = fig.add_subplot(111, projection='3d')

    # Plot Earth as a sphere
    u = np.linspace(0, 2 * np.pi, 50)
    v = np.linspace(0, np.pi, 50)
    x_earth = r_E * np.outer(np.cos(u), np.sin(v))
    y_earth = r_E * np.outer(np.sin(u), np.sin(v))
    z_earth = r_E * np.outer(np.ones(np.size(u)), np.cos(v))
    ax.plot_surface(x_earth, y_earth, z_earth, color='b', alpha=0.3)

    # Plot ground truth trajectory
    ax.plot(x_true, y_true, z_true, label="Ground Truth", color="green", linestyle="-", linewidth=2)

    # Plot simulated trajectory
    ax.plot(x_sim, y_sim, z_sim, label="Simulated Trajectory", color="red", linestyle="--", linewidth=2)

    # Labels and legends
    ax.set_xlabel("X Position (km)")
    ax.set_ylabel("Y Position (km)")
    ax.set_zlabel("Z Position (km)")
    ax.set_title("Missile Trajectory in ECI Coordinates")
    ax.legend()

    # Save figure
    plt.savefig(os.path.join(figures_dir, "trajectory_3d.png"))

def plotError():
    """
    Plots the position error (x, y, z) over time using three stacked subplots.
    """
    ground_truth = np.load(os.path.join(data_dir, missile_store_filename), allow_pickle=True).item()
    xk_ground_arr = ground_truth["states"] 

    sim = np.load(os.path.join(data_dir, sim_filename), allow_pickle=True).item()
    tk_arr = sim["times"]
    xk_arr = sim["states"]

    # Compute position errors
    error_x = xk_arr[:, 0] - xk_ground_arr[:, 0]  
    error_y = xk_arr[:, 1] - xk_ground_arr[:, 1]  
    error_z = xk_arr[:, 2] - xk_ground_arr[:, 2]  

    # Create figure and subplots
    fig, axs = plt.subplots(3, 1, figsize=(10, 8), sharex=True)

    tk_arr = tk_arr#[:10]
    error_x = error_x#[:10]
    error_y = error_y#[:10]
    error_z = error_z#[:10]

    # X Error Plot
    axs[0].plot(tk_arr, error_x, label="X Position Error", color="red")
    axs[0].set_ylabel("Error (km)")
    axs[0].legend()
    axs[0].grid()

    # Y Error Plot
    axs[1].plot(tk_arr, error_y, label="Y Position Error", color="green")
    axs[1].set_ylabel("Error (km)")
    axs[1].legend()
    axs[1].grid()

    # Z Error Plot
    axs[2].plot(tk_arr, error_z, label="Z Position Error", color="blue")
    axs[2].set_xlabel("Elapsed Time (s)")
    axs[2].set_ylabel("Error (km)")
    axs[2].legend()
    axs[2].grid()

    plt.tight_layout()
    plt.savefig(os.path.join(figures_dir, error_filename))

if __name__ == "__main__":
    # ic.disable()
    args = parse_args()
    run(main, mode=args.mode, name=args.name, clear=args.clear, days=args.days)
    # simulate()
    # plotError()
    # plotTrajectory()