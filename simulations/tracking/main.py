from icecream import ic
from src import *

# Constants
mu_E = 3.986004415e5  # km^3 / s^2
r_E = 6.378137e3  # km

def makeSensor(root):
    # Classical orbital elements and Walker parameters
    a = 1000 + r_E  # km
    i = 82  # deg
    omega = 0  # deg
    e = 0
    Omega_0 = 0  # deg
    M_0 = 0  # deg

    conic_angle = 50  # Sensor field of regard

    sat_name = "LEOSat"
    satellite = Satellite(root, sat_name, a, i, Omega_0, omega, e, M_0)
    satellite.loadObject()

    sensor_name = "LEOSensor"
    sensor = Sensor(root, sat_name, sensor_name, conic_angle)
    sensor.loadObject()

    return sensor 

def main(root):
    makeSensor(root)
    missile = Missile(root, name="TestMissile")
    missile.loadObject()

    print("Running tracking optimization...")
    return