from agi.stk12.stkobjects import *
import win32com.client # Interface with open STK window
from missile import Missile
from chain import Chain

# Attach to an existing STK instance
stkApp = win32com.client.GetActiveObject("STK12.Application")

# Get the root object to access the scenario
root = stkApp.Personality2

if root.CurrentScenario is not None:
    print("Connected to scenario:", root.CurrentScenario.InstanceName)
else:
    print("No scenario is currently open.")

# chain = root.CurrentScenario.Children.New(AgESTKObjectType.eChain, 'MyChain')
# chain.Objects.Add('Satellite/LEOSat/Sensor/SWIR')

for i in range(1):
    missile_name = f"Missile{i+1}"
    missile = Missile(root, name=missile_name)
    missile.loadObject()

    chain_name = f"Missile{i+1}Chain"
    chain = Chain(root, name=chain_name)
    chain.loadObject()

    missile_path = missile.getObjectType() + '/' + missile_name

    chain.addToChain(missile_path)
#     chain.addToChain('SatelliteCollection/LEOSats/Subset')



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