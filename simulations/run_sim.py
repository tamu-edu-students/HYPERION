import importlib
from src.stk_init import parse_arguments
from src.stk_runner import run_simulation

if __name__ == "__main__":
    args = parse_arguments()
    
    sim_name = input("Enter simulation script: ").strip()
    
    try:
        sim_module = importlib.import_module(f"simulations.{sim_name}")
        run_simulation(sim_module.main, mode=args.mode, scenario_name=args.name)
    except ModuleNotFoundError:
        print(f"Simulation '{sim_name}' not found. Ensure it's in the 'simulations' folder.")
