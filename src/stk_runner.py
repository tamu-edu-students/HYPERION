import os
import shutil
import time
import signal
import sys
from .utilities import clearScenario
from agi.stk12 import utilities

def run(sim_function, mode="engine", scenario_name=None, clear=False):
    """Handles simulation execution, scenario saving, and cleanup."""
    from src.stk_init import initialize

    start_time = time.time()
    
    # Ensure root and attached are defined before try-block
    stk, root, scenario, attached = None, None, None, False  

    def handle_interrupt(signal_received, frame):
        """Handles user interrupts for a graceful shutdown."""
        print("\nUser interrupt detected! Cleaning up and exiting...")

        if root and root.CurrentScenario:
            root.CloseScenario()
            print("Scenario closed.")

        if stk and mode == "engine":
            stk.ShutDown()
            print("STK Engine shut down.")

        end_time = time.time()
        print(f"Simulation interrupted after {(end_time - start_time)/60:.2f} min.")
        sys.exit(0)

    # Register the interrupt handler
    signal.signal(signal.SIGINT, handle_interrupt)
    
    # Initialize STK and scenario
    try:
        stk, root, scenario, attached = initialize(mode, scenario_name)
    except utilities.exceptions.STKRuntimeError:
        print("Make sure the proper license is enabled (i.e., connect to TAMU WiFi).")
        sys.exit(0)
    except KeyboardInterrupt:
        handle_interrupt(signal.SIGINT, None)
        sys.exit(0)
    except Exception as e:
        print(f"The following exception was caught upon STK initialization: {e}")
        sys.exit(0)

    if scenario and clear:
        clearScenario(scenario)

    try:
        if scenario is None:
            print("No scenario detected. Exiting.")
            return
        
        sim_function(root)  # Run the user-specified simulation function

        # Handle scenario saving
        if scenario_name:
            save_dir = os.path.join("scenarios", scenario_name)
            if os.path.exists(save_dir):
                shutil.rmtree(save_dir)  
            os.makedirs(save_dir, exist_ok=True)  

            save_path = os.path.abspath(os.path.join(save_dir, f"{scenario_name}.sc"))
            print(f"Saving scenario to: {save_path}")
            root.SaveAs(save_path)
            print(f"Scenario saved.")
        elif attached:
            root.Save()
            print("Scenario saved.")
        else:
            print("No scenario name provided. Scenario will not be saved.")

    except KeyboardInterrupt:
        handle_interrupt(signal.SIGINT, None)

    finally:
        if stk and mode == "engine":
            stk.ShutDown()
            print("STK Engine shut down.")

        end_time = time.time()
        print(f"Simulation concluded after {(end_time - start_time)/60:.2f} min.")
