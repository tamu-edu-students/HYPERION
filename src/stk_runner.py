import os
import time
import signal
import sys
from icecream import ic
from agi.stk12 import utilities
from .utilities import clearScenario

def run(sim_function, mode="engine", name=None, clear=False, days=1):
    """Handles simulation execution, scenario saving, and cleanup."""
    from src.stk_init import initialize

    start_time = time.time()

    os.makedirs(os.path.abspath("scenarios"), exist_ok=True)
    
    # Ensure root and attached are defined before try-block
    stk, root, scenario, attached = None, None, None, False  

    def handle_interrupt(signal_received, frame):
        """Handles user interrupts for a graceful shutdown."""
        print("\n\n[!] User interrupt detected! Cleaning up and exiting...", flush=True)

        if stk and mode == "engine":
            stk.ShutDown()
            print("STK Engine shut down.", flush=True)

        end_time = time.time()
        print(f"Simulation interrupted after {(end_time - start_time)/60:.2f} min.", flush=True)
        sys.exit(130)  # 130 is the standard exit code for SIGINT


    # Register the interrupt handler
    signal.signal(signal.SIGINT, handle_interrupt)
    
    # Initialize STK and scenario
    try:
        stk, root, scenario, attached = initialize(mode, name, days)
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
        if name:
            save_path = os.path.abspath(os.path.join("scenarios", name, f"{name}.sc"))

            if os.path.exists(save_path):
                print("Saving scenario...")
                root.Save()
            else:
                print(f"Saving scenario to: {save_path}")
                root.SaveAs(save_path)

            print(f"Scenario saved.")
        elif attached:
            root.Save()
            print("Scenario saved.")
        else:
            print("No scenario name provided. Scenario will not be saved.")

        if stk and mode == "engine":
            stk.ShutDown()
            print("STK Engine shut down.")

        end_time = time.time()
        print(f"Simulation concluded after {(end_time - start_time)/60:.2f} min.")

    except KeyboardInterrupt:
        handle_interrupt(signal.SIGINT, None)
        