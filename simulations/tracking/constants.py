import os 

# Constants
MU_E = 3.986004415e5  # km^3 / s^2
R_E = 6.378137e3  # km

FIGURES_DIR = os.path.abspath("figures/tracking")
DATA_DIR = os.path.abspath("data/tracking/")

os.makedirs(FIGURES_DIR, exist_ok=True)
os.makedirs(DATA_DIR, exist_ok=True)

MISSILE_STORE_FILENAME = "missile_store"
SENSOR_STORE_FILENAME = "sensor_store"
SAT_STORE_FILENAME = "sat_store"

EKF_STORE_FILENAME = "ekf_store"
MONTE_CARLO_FILENAME = "monte_carlo_store"

POSITION_ERROR_FILENAME = "position_error"
VELOCITY_ERROR_FILENAME = "velocity_error"
MONTE_CARLO_POSITION_FILENAME = "monte_carlo_position"
MONTE_CARLO_VELOCITY_FILENAME = "monte_carlo_velocity"

TRAJECTORY_2D_FILENAME = "trajectory_2d"
TRAJECTORY_3D_FILENAME = "trajectory_3d"