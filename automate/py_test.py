import time
from agi.stk12.stkobjects import *
from agi.stk12.stkdesktop import STKDesktop # Interface with open STK window
from objects import *
from utilities import *

# Attach to an existing STK instance
stk = STKDesktop.AttachToApplication()

# Get the root object to access the scenario
root = stk.Root

if root.CurrentScenario is not None:
    scenario = root.CurrentScenario
    print("Connected to scenario:", root.CurrentScenario.InstanceName)
else:
    print("No scenario is currently open.")

# Constants
mu_E = 3.986004415e5  # km^3 / s^2
r_E = 6.378137e3  # km

def makeLEOSats(root):
    """
    Creates a Walker constellation with attached sensors.
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

    conic_angle = 45

    sats_per_plane = int(t / p)

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


    print("LEO Satellites loaded successfully.")

if __name__ == "__main__":
    start_time = time.time()
    clearScenario(scenario)
    makeLEOSats(root)
    root.Save()
    print("Scenario saved successfully.")
    end_time = time.time()
    duration = end_time - start_time

    print(f"Simulation concluded after {duration/60:.2f} min")