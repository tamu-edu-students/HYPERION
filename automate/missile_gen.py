from agi.stk12.stkobjects import *
import win32com.client # Interface with open STK window
from missile import Missile

# Attach to an existing STK instance
stkApp = win32com.client.GetActiveObject("STK12.Application")

# Get the root object to access the scenario
root = stkApp.Personality2

if root.CurrentScenario is not None:
    print("Connected to scenario:", root.CurrentScenario.InstanceName)
else:
    print("No scenario is currently open.")

# Create missile
missile = Missile(root, name="MissileTest")
missile.add()

print("MissileTest added.")