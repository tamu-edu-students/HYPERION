"""
`analyze.py`

Analysis and plotting functions.
"""
import os 
import pickle
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from .constants import *
from src import *

def plot_ekf():
    with open(os.path.join(DATA_DIR, EKF_STORE_FILENAME+".pkl"), "rb") as f:
        ekf_store = pickle.load(f)  

    t = ekf_store.t  
    ex = ekf_store.ex  
    sx = ekf_store.sx 
    t_hours = sec2min(t.repeat(2))

    labels_pos = [r"$x$ [km]", r"$y$ [km]", r"$z$ [km]"]
    labels_vel = [r"$\dot{x}$ [km/s]", r"$\dot{y}$ [km/s]", r"$\dot{z}$ [km/s]"]

    # --- Position Error Plots ---
    fig_pos, axs_pos = plt.subplots(3, 1, figsize=(8, 9), sharex=True)
    for i in range(3):
        axs_pos[i].plot(t_hours, ex[i, :], label="Error", color="black")
        axs_pos[i].plot(t_hours, 3 * sx[i, :], linestyle="--", color="tab:blue", label=r"$\pm3\sigma$")
        axs_pos[i].plot(t_hours, -3 * sx[i, :], linestyle="--", color="tab:blue")
        axs_pos[i].set_ylabel(labels_pos[i])
        axs_pos[i].grid(True)

    axs_pos[-1].set_xlabel("Time Elapsed [min]")
    axs_pos[0].legend(loc="upper right")
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, POSITION_ERROR_FILENAME+".pdf"))
    plt.close(fig_pos)

    # --- Velocity Error Plots ---
    fig_vel, axs_vel = plt.subplots(3, 1, figsize=(8, 9), sharex=True)
    for i in range(3, 6):
        axs_vel[i-3].plot(t_hours, ex[i, :], label="Error", color="black")
        axs_vel[i-3].plot(t_hours, 3 * sx[i, :], linestyle="--", color="tab:blue", label=r"$\pm3\sigma$")
        axs_vel[i-3].plot(t_hours, -3 * sx[i, :], linestyle="--", color="tab:blue")
        axs_vel[i-3].set_ylabel(labels_vel[i-3])
        axs_vel[i-3].grid(True)

    axs_vel[-1].set_xlabel("Time Elapsed [min]")
    axs_vel[0].legend(loc="upper right")
    plt.tight_layout()
    plt.savefig(os.path.join(FIGURES_DIR, VELOCITY_ERROR_FILENAME+".pdf"))
    plt.close(fig_vel)


def plot_trajectory():
    # Load missile truth
    missile_store = np.load(os.path.join(DATA_DIR, MISSILE_STORE_FILENAME + ".npz"), allow_pickle=True)
    x_m_store = missile_store["x_store"] 

    # Load EKFStore (pickled)
    with open(os.path.join(DATA_DIR, EKF_STORE_FILENAME + ".pkl"), "rb") as f:
        ekf_store = pickle.load(f)

    # Extract posterior trajectory from EKF
    mx_post = ekf_store.mx_post

    # Create Earth sphere
    u, v = np.linspace(0, 2 * np.pi, 100), np.linspace(0, np.pi, 100)
    x_earth = R_E * np.outer(np.cos(u), np.sin(v))
    y_earth = R_E * np.outer(np.sin(u), np.sin(v))
    z_earth = R_E * np.outer(np.ones_like(u), np.cos(v))

    # Plot
    fig = plt.figure(figsize=(10, 8))
    ax = fig.add_subplot(111, projection="3d")
    ax.view_init(elev=25, azim=0)

    # Earth
    ax.plot_surface(x_earth, y_earth, z_earth, color='lightblue', alpha=0.5, zorder=0)

    # Trajectories
    ax.plot(x_m_store[:, 0], x_m_store[:, 1], x_m_store[:, 2], label="Truth", color="black", zorder=1)
    ax.plot(mx_post[0, :], mx_post[1, :], mx_post[2, :], label="EKF Estimate", color="tab:blue", zorder=2)

    ax.set_xlabel("X [km]")
    ax.set_ylabel("Y [km]")
    ax.set_zlabel("Z [km]")
    ax.set_title("Missile Trajectory Over Earth")
    ax.legend()
    ax.grid(True)

    # Scale the axes equally
    max_range = np.max(np.linalg.norm(x_m_store, axis=1))
    ax.set_xlim(-max_range, max_range)
    ax.set_ylim(-max_range, max_range)
    ax.set_zlim(-max_range, max_range)
    ax.set_box_aspect([1, 1, 1])  # equal aspect

    plt.tight_layout()
    plt.show()