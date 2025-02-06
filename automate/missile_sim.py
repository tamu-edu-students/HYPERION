from agi.stk12.stkobjects import *
from agi.stk12.stkdesktop import STKDesktop # Interface with open STK window
from missile import Missile
from chain import Chain
from satellite import Satellite
from constellation import Constellation
from sensor import Sensor

# Attach to an existing STK instance
stk = stk = STKDesktop.AttachToApplication()

# Get the root object to access the scenario
root = stk.Root

if root.CurrentScenario is not None:
    print("Connected to scenario:", root.CurrentScenario.InstanceName)
else:
    print("No scenario is currently open.")

# Constants
mu_E = 3.986004415e5 # km^3 / s^2
r_E = 6.378137e3 # km

### Constellation
# Classical Elements
a = 1000 + r_E # km
e = 0
Omega_0 = 0 # deg
i = 82 # deg
omega = 0 # deg
M_0 = 0 # deg

# Walker Constellation
t = 30 # Total number of satellites
p = 5 # Number of planes
f = 3 # Phasing factor
delta_M = (f * 360) / t # Change in mean anomaly for equivalent satellites in neighboring planes (deg)
sats_per_plane = int(t / p) # Number of sats per plane

# Sensor
conic_angle = 60 # deg

# Constellation
constellation_name = "LEOSensors"
constellation = Constellation(root, constellation_name, unload=False)
# constellation.loadObject()

# # Satellite/sensor generation
# for plane in range(p):
#     for sat in range(sats_per_plane):
#         Omega = ((plane / p) * 360) + Omega_0
#         M = (sat / sats_per_plane) * 360 + delta_M * plane + M_0

#         sat_name = f"Sat_P{plane+1}_S{sat+1}"
#         satellite = Satellite(root, sat_name, a, i, Omega, omega, e, M)
#         satellite.loadObject()

#         sat_path = satellite.getObjectPath()
        
#         sensor_name = "LEOSensor"
#         sensor = Sensor(root, sat_name, sensor_name, conic_angle)
#         sensor.loadObject()

#         sensor_path = sensor.getObjectPath()

#         constellation.addToObject(sensor_path)

constellation_path = constellation.getObjectPath()

for i in range(1):
    chain_name = f"Missile{i+1}Chain"
    chain = Chain(root, name=chain_name)
    chain.loadObject()
    chain.addToObject(constellation_path)

    missile_name = f"Missile{i+1}"
    missile = Missile(root, name=missile_name)
    missile.loadObject()
    missile.saveObject()
    missile_path = missile.getObjectPath()

    chain.addToObject(missile_path)
    chain.computeAccess()

root.Save()