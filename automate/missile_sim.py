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

missiles = []
for i in range(1):
    missile_name = f"Missile{i+1}"
    missile = Missile(root, name=missile_name)
    missile.add()  # Add the missile to the STK scenario
    missiles.append(missile)
print("All 10 missiles added.")

# constellation = root.CurrentScenario.Children.New(AgESTKObjectType.eConstellation, 'Missiles')
# for missile in missiles:
#     constellation.Objects.AddObject(missile.stk_object)

