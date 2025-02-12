import argparse
from agi.stk12.stkdesktop import STKDesktop
from agi.stk12.stkengine import STKEngine

def initialize(mode="engine", scenario_name=None):
    """
    Initializes STK in either 'desktop' or 'engine' mode.

    Returns:
        stk (object): STK application instance (desktop or engine).
        root (object): STK root object.
        scenario (object): Reference to the STK scenario.
        attached (bool): True if attaching to an existing STK instance.
    """
    attached = False  

    if mode == "engine":
        print("Starting STK in Engine mode...")
        stk = STKEngine.StartApplication(noGraphics=False)
        root = stk.NewObjectRoot()
        root.NewScenario("TempScenario" if not scenario_name else scenario_name)
        scenario = root.CurrentScenario

    else:  
        if scenario_name:
            print(f"Starting STK Desktop and creating scenario '{scenario_name}'...")
            stk = STKDesktop.StartApplication(visible=True)
            root = stk.Root
            root.NewScenario(scenario_name)
        else:
            try:
                print("Attempting to attach to running STK Desktop instance...")
                stk = STKDesktop.AttachToApplication()
                root = stk.Root
                attached = True  
                print("Attached to existing STK instance.")
            except:
                print("No running STK found. Starting new instance...")
                stk = STKDesktop.StartApplication(visible=True)
                root = stk.Root

        scenario = root.CurrentScenario if root.CurrentScenario else None

    return stk, root, scenario, attached


def parse_args():
    """Handles command-line arguments."""
    parser = argparse.ArgumentParser(description="Choose STK mode: Desktop or Engine.")
    parser.add_argument("--mode", choices=["desktop", "engine"], default="engine", help="Run STK in 'desktop' or 'engine' mode.")
    parser.add_argument("--name", type=str, default=None, help="Scenario name (if applicable).")
    
    return parser.parse_args()