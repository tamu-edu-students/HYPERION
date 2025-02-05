from agi.stk12.stkobjects import *
from agi.stk12.stkdesktop import STKDesktop # Interface with open STK window
from missile import Missile
from chain import Chain
from satellite import Satellite
from constellation import Constellation

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

# Constellation
constellation_name = "LEOSats"
constellation = Constellation(root, name=constellation_name)
constellation.loadObject()

# # Satellite generation
# for plane in range(p):
#     for sat in range(sats_per_plane):
#         Omega = ((plane / p) * 360) + Omega_0
#         M = (sat / sats_per_plane) * 360 + delta_M * plane + M_0

#         sat_name = f"Sat_P{plane+1}_S{sat+1}"

#         satellite = Satellite(root, sat_name, a, i, Omega, omega, e, M)
#         satellite.loadObject()

#         sat_path = satellite.getObjectType() + '/' + sat_name  
#         constellation.addToObject(sat_path)

constellation_path = constellation.getObjectType() + '/' + constellation_name

for i in range(1):
    chain_name = f"Missile{i+1}Chain"
    chain = Chain(root, name=chain_name)
    chain.loadObject()
    # chain.addToObject(constellation_path)
    chain.addToObject("Satellite/LEOSat/Sensor/SWIR")

    missile_name = f"Missile{i+1}"
    missile = Missile(root, name=missile_name)
    missile.loadObject()
    missile.saveObject()
    missile_path = missile.getObjectType() + '/' + missile_name

    chain.addToObject(missile_path)


#     """
#     Create Chain object called Missile{i+1}Chain
#     Add Missile{i+1} to the chain
#     Add LEOSats-AllSensors to chain. Note that LEOSats is a WalkerConstellation object in STK and it uses a satellite model, LEO sat that has an attached sensor. Since the constellation inherits from the satellite, each satellite has the sensor, thus AllSensors
#     Compute access for the missile
#     Using the launch time to impact time info about the missile, determine the % of time the missile is visible to the sensors (i.e. within the field of regard)
#     Save the tracking % to a list
#     Delete the chain
#     Delete the missile"""
    
# print("All 10 missiles added.")

root.Save()