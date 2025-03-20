"""
`analyze.py`

Analysis and plotting functions.
"""
import os 
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from .constants import *

def plotTrajectory():
    """
    Plots the ground truth and simulated missile trajectory in 3D space with the Earth at the origin.
    """

    # Load ground truth and simulation data
    ground_truth = np.load(os.path.join(DATA_DIR, MISSILE_STORE_FILENAME), allow_pickle=True).item()
    xk_ground_arr = np.array(ground_truth["states"])  # Ground truth positions

    sim = np.load(os.path.join(DATA_DIR, EKF_STORE_FILENAME), allow_pickle=True).item()
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
    x_earth = R_E * np.outer(np.cos(u), np.sin(v))
    y_earth = R_E * np.outer(np.sin(u), np.sin(v))
    z_earth = R_E * np.outer(np.ones(np.size(u)), np.cos(v))
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
    plt.savefig(os.path.join(FIGURES_DIR, "trajectory_3d.png"))

def plotError():
    """
    Plots the position error (x, y, z) over time using three stacked subplots.
    """
    ground_truth = np.load(os.path.join(DATA_DIR, MISSILE_STORE_FILENAME), allow_pickle=True).item()
    xk_ground_arr = ground_truth["states"] 

    sim = np.load(os.path.join(DATA_DIR, EKF_STORE_FILENAME), allow_pickle=True).item()
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
    plt.savefig(os.path.join(FIGURES_DIR, "error.png"))