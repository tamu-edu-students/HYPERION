import argparse
import os
import datetime
from icecream import ic
from agi.stk12.stkdesktop import STKDesktop
from agi.stk12.stkengine import STKEngine

def initialize(mode="engine", name=None, days=1):
    """
    Initializes STK in either 'desktop' or 'engine' mode with a specified analysis period.

    Parameters:
        mode (str): "engine" or "desktop".
        name (str): Name of the scenario.
        days (int): Duration of the scenario analysis period (default: 1 day).

    Returns:
        stk (object): STK application instance (desktop or engine).
        root (object): STK root object.
        scenario (object): Reference to the STK scenario.
        attached (bool): True if attaching to an existing STK instance.
    """
    attached = False
    load_path = None  

    # Attempt to find an existing scenario file
    if name:
        load_path = os.path.abspath(os.path.join("scenarios", name, f"{name}.sc"))

        if not os.path.exists(load_path):  # Check if file actually exists
            print(f"Scenario file '{name}' not found. Creating a new scenario instead.")
            load_path = None  # Prevent invalid load attempt

    if mode == "engine":
        print("Starting STK in Engine mode...")
        stk = STKEngine.StartApplication(noGraphics=False)
        root = stk.NewObjectRoot()

        if load_path:
            try:
                root.Load(load_path)
                print(f"Successfully loaded existing scenario: {name}.")
            except Exception as e:
                print(f"Error loading scenario {name}: {e}. Creating new scenario instead.")
                root.NewScenario(name or "Temp")
        else:
            root.NewScenario(name or "Temp")
            print("Created new scenario.")

        scenario = root.CurrentScenario            

    else:  # Desktop Mode
        if name:
            print("Starting STK Desktop...")
            stk = STKDesktop.StartApplication(visible=True, userControl=True)
            root = stk.Root

            if load_path:
                try:
                    root.Load(load_path)
                    print(f"Successfully loaded existing scenario: {name}.")
                except Exception as e:
                    print(f"Error loading scenario {name}: {e}. Creating new scenario instead.")
                    root.NewScenario(name)
            else:
                root.NewScenario(name or "Temp")
                print("Created new scenario.")
        else:
            try:
                print("Attempting to attach to running STK Desktop instance...")
                stk = STKDesktop.AttachToApplication()
                root = stk.Root
                attached = True  
                print("Attached to existing STK instance.")
            except:
                print("No running STK found. Creating new scenario called 'Temp'...")
                stk, root, scenario, attached = initialize(mode="desktop", name="Temp") 
                
        scenario = root.CurrentScenario

    # Set Scenario Time Period
    if not load_path and not attached: 

        current_time = datetime.datetime.now(datetime.timezone.utc).strftime("%d %b %Y %H:%M:%S")

        end_time = (datetime.datetime.now(datetime.timezone.utc) + datetime.timedelta(days=days)).strftime("%d %b %Y %H:%M:%S")


        scenario.SetTimePeriod(current_time, end_time)  # Apply time window
        print(f"Scenario Time Set: Start = {scenario.StartTime}, End = {scenario.StopTime}")

    return stk, root, scenario, attached

def parse_args():
    """Handles command-line arguments."""
    parser = argparse.ArgumentParser(description="Choose STK mode: Desktop or Engine.")
    parser.add_argument("--mode", choices=["desktop", "engine"], default="engine", help="Run STK in 'desktop' or 'engine' mode.")
    parser.add_argument("--name", type=str, default=None, help="Scenario name (if applicable).")
    parser.add_argument("-c", "--clear", action="store_true", help="Clear scenario before running.")
    parser.add_argument("--days", type=int, default=1, help="Number of days for the scenario analysis period (default: 1 day).")
    
    return parser.parse_args()
