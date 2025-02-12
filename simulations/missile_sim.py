import csv
import matplotlib.pyplot as plt
import pandas as pd
from src import *

# Constants
mu_E = 3.986004415e5  # km^3 / s^2
r_E = 6.378137e3  # km

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

            sensor_name = "LEOSensor"
            sensor = Sensor(root, sat_name, sensor_name, conic_angle)
            sensor.loadObject()

            constellation.addToObject(sensor.getObjectPath())

    return constellation.getObjectPath()

def createMissiles(root, num_missiles):
    """
    Creates and returns missiles and missile chains without attaching the constellation yet.
    """
    missile_paths = []
    for i in range(num_missiles):
        chain_name = f"Missile{i+1}Chain"
        chain = MissileChain(root, chain_name)
        chain.loadObject()

        missile_name = f"Missile{i+1}"
        missile = Missile(root, missile_name)
        missile.loadObject()
        missile.saveObject()
        missile_path = missile.getObjectPath()
        missile_paths.append((chain, missile_path))

        # Add the missile to the chain (constellations will be added later)
        chain.addToObject(missile_path)

    return missile_paths

def attachConstellationToChains(missile_paths, constellation_path):
    """
    Attaches the given constellation to all missile chains.
    """
    for chain, _ in missile_paths:
        chain.addToObject(constellation_path)

def computeAndSaveTracking(missile_paths, conic_angle, output_file):
    """
    Computes tracking percentages for each missile and saves the results.
    """
    results = []

    for i, (chain, missile_path) in enumerate(missile_paths):
        tracking_percent = chain.computeTrackingPercentage(missile_path)
        results.append((i + 1, tracking_percent, conic_angle))
        print(f"Missile {i + 1}: {tracking_percent:.2f}% tracked with conic angle {conic_angle}°")

    # Save results to CSV
    with open(output_file, mode='a', newline='') as file:
        writer = csv.writer(file)
        for missile_id, tracking_percent, conic_angle in results:
            writer.writerow([missile_id, round(tracking_percent, 2), conic_angle])

def main(root):
    output_file = "data/missile-tracking.csv"

    with open(output_file, mode='w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(["Missile ID", "Tracking %", "Conic Angle (deg)"])

    # Step 1: Create missiles and missile chains 
    missile_paths = createMissiles(root, num_missiles=100)

    # Step 2: Loop over conic angles
    previous_constellation_path = None  

    for conic_angle in range(30, 61, 10):
        # Create the constellation for this conic angle
        constellation_path = makeLEOConstellation(root, conic_angle)

        # Remove the previous constellation from all missile chains
        if previous_constellation_path:
            for chain, _ in missile_paths:
                chain.removeFromObject(previous_constellation_path)

        # Attach the new constellation to all missile chains
        attachConstellationToChains(missile_paths, constellation_path)

        # Compute tracking percentages and save results
        computeAndSaveTracking(missile_paths, conic_angle, output_file)

        # Update the previous constellation
        previous_constellation_path = constellation_path


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
    args = parse_arguments()
    run_simulation(main, mode=args.mode, scenario_name=args.name)
    plot(save_path="figures/missile-sim-30to60.png")