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

POSITION_ERROR_FILENAME = "position_error"
VELOCITY_ERROR_FILENAME = "velocity_error"