import os
import shutil
import time

def run_simulation(sim_function, mode="engine", scenario_name=None):
    """Handles simulation execution, scenario saving, and cleanup."""
    from src.stk_init import initialize_stk

    start_time = time.time()
    
    # Initialize STK and scenario
    stk, root, scenario, attached = initialize_stk(mode, scenario_name)

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

    finally:
        if not attached and root.CurrentScenario:
            root.CloseScenario()
            print("Scenario closed.")

        if mode == "engine":
            stk.ShutDown()
            print("STK Engine shut down.")

        end_time = time.time()
        print(f"Simulation concluded after {(end_time - start_time)/60:.2f} min.")
