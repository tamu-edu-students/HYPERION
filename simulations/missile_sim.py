import csv
from datetime import datetime
import matplotlib.pyplot as plt
import pandas as pd
from icecream import ic
from src import *

# Constants
mu_E = 3.986004415e5  # km^3 / s^2
r_E = 6.378137e3  # km

# File information
missile_filename = "missiles-10"
sat_filename = "satellites-LEO"
output_file = "data/missile-tracking.csv"

def makeLEOConstellation(root, conic_angle):
    """
    Creates a Walker constellation with attached sensors and adds to a constellation object.
    """
    # Classical orbital elements and Walker parameters
    a = 1000 + r_E  # km
    i = 82  # deg
    omega = 0  # deg
    e = 0
    Omega_0 = 0  # deg
    M_0 = 0  # deg

    t = 30  # Total number of satellites
    p = 5  # Number of planes
    f = 3  # Phasing factor
    delta_M = (f * 360) / t  # Change in mean anomaly for equivalent satellites

    sats_per_plane = int(t / p)
    constellation_name = f"LEOSensors_{int(conic_angle)}"
    constellation = Constellation(root, constellation_name)
    constellation.loadObject()

    for plane in range(p):
        for sat in range(sats_per_plane):
            Omega = ((plane / p) * 360) + Omega_0
            M = (sat / sats_per_plane) * 360 + delta_M * plane + M_0

            sat_name = f"LEOSat_P{plane+1}_S{sat+1}"
            satellite = Satellite(root, sat_name, a, i, Omega, omega, e, M)
            satellite.loadObject()
            satellite.saveObject(sat_filename)

            sensor_name = "LEOSensor"
            sensor = Sensor(root, sat_name, sensor_name, conic_angle)
            sensor.loadObject()

            constellation.addToObject(sensor)

    return constellation

def createMissiles(root, num_missiles=None, from_csv=False):
    """
    Creates and returns missiles and missile chains without attaching the constellation yet.
    """

    # Storage
    missiles = []
    chains = []

    if num_missiles is not None and not from_csv:
        for i in range(num_missiles):
            chain_name = f"Missile{i+1}Chain"
            chain = Chain(root, chain_name)
            chain.loadObject()

            missile_name = f"Missile{i+1}"
            missile = Missile(root, missile_name)
            missile.loadObject()
            missile.saveObject(missile_filename)

            # Add the missile to the chain (constellations will be added later)
            chain.addToObject(missile)

            missiles.append(missile)
            chains.append(chain)
    
    elif from_csv:
        missile_file = "data/missiles/" + missile_filename + ".csv"
        if not os.path.exists(missile_file):
            raise FileNotFoundError(f"Missile file '{missile_file}' not found.")
        
        with open(missile_file, mode='r', newline='', encoding='utf-8') as file:
            reader = csv.DictReader(file)
            for i, row in enumerate(reader):
                chain_name = f"Missile{i+1}Chain"
                chain = Chain(root, chain_name)
                chain.loadObject()

                missile = Missile.fromCSV(root, row)
                missile.loadObject()

                # Add the missile to the chain (constellations will be added later)
                chain.addToObject(missile)

                missiles.append(missile) 
                chains.append(chain)
    
    else:
        raise RuntimeError("If not loading from a csv, the number of missiles must be specified.")
    
    return missiles, chains

def computeTrackingPercentage(missile:Missile, chain:Chain):
        """
        Computes the percentage of time the missile is tracked by valid chains.
        """
        missile_name = missile.getObjectName()

        launch_time = missile.getLaunchTime()
        impact_time = missile.getImpactTime()

        launch_time = datetime.strptime(launch_time, "%d %b %Y %H:%M:%S.%f")
        impact_time = datetime.strptime(impact_time, "%d %b %Y %H:%M:%S.%f")
        total_trajectory_duration = (impact_time - launch_time).total_seconds()

        # Compute total valid access duration using computeAccess
        total_access_duration = chain.computeTotalAccess()

        # Calculate the tracking percentage
        tracking_percentage = (total_access_duration / total_trajectory_duration) * 100
        print(f"Tracking percentage for missile '{missile_name}': {tracking_percentage:.2f}%")

        return tracking_percentage

def computeAndSaveTracking(missiles, chains, conic_angle, output_file):
    """
    Computes tracking percentages for each missile and saves the results.
    """
    results = []

    for i in range(len(missiles)):
        tracking_percent = computeTrackingPercentage(missiles[i], chains[i])
        results.append((i + 1, tracking_percent, conic_angle))
        print(f"Missile {i + 1}: {tracking_percent:.2f}% tracked with conic angle {conic_angle}°")

    # Save results to CSV
    with open(output_file, mode='a', newline='') as file:
        writer = csv.writer(file)
        for missile_id, tracking_percent, conic_angle in results:
            writer.writerow([missile_id, round(tracking_percent, 2), conic_angle])

def main(root):    
    with open(output_file, mode='w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(["Missile ID", "Tracking %", "Conic Angle (deg)"])

    # TODO: Make this less clunky
    Missile.makeHeaders(missile_filename)

    # Step 1: Create missiles and missile chains 
    missiles, chains = createMissiles(root, num_missiles=10, from_csv=False)

    # Step 2: Loop over conic angles
    prev_constellation = None  

    for conic_angle in range(30, 61, 10):
        Satellite.makeHeaders(sat_filename)
        
        # Create the constellation for this conic angle
        constellation = makeLEOConstellation(root, conic_angle)

        # Remove the previous constellation from all missile chains
        if prev_constellation:
            for chain in chains:
                chain.removeFromObject(prev_constellation)

        for chain in chains:
            chain.addToObject(constellation)

        # Compute tracking percentages and save results
        computeAndSaveTracking(missiles, chains, conic_angle, output_file)

        # Update the previous constellation
        prev_constellation = constellation


def plot(save_path = "figures/missile-sim.png"):
    data = pd.read_csv("data/missile-tracking.csv")

    plt.figure(figsize=(10, 6))

    # Get unique conic angles and generate a color map dynamically
    conic_angles = sorted(data["Conic Angle (deg)"].unique())
    color_map = plt.colormaps['viridis'].resampled(len(conic_angles))

    # Plot each conic angle group
    for idx, conic_angle in enumerate(conic_angles):
        subset = data[data["Conic Angle (deg)"] == conic_angle]
        color = color_map(idx)  

        # Scatter plot for the current conic angle
        plt.scatter(subset["Missile ID"], subset["Tracking %"], label=f"{conic_angle}°", color=color, alpha=0.7)

        # Calculate and plot the mean line
        mean_tracking = subset["Tracking %"].mean()
        plt.axhline(mean_tracking, color=color, linestyle='--', linewidth=1.5, alpha=0.8)

    plt.xlabel("Missile ID")
    plt.ylabel("Tracking Visibility (%)")
    plt.legend(title="Conic Angle", loc='upper right', bbox_to_anchor=(1.15, 1))
    plt.grid(True, linestyle='--', alpha=0.5)

    # Save the figure
    plt.savefig(save_path, format='png', dpi=300, bbox_inches='tight')
    print(f"Plot saved to '{save_path}'.")


if __name__ == "__main__":
    args = parse_args()
    run(main, mode=args.mode, scenario_name=args.name, clear=args.clear)
    # plot(save_path="figures/missile-sim-30to60.png")