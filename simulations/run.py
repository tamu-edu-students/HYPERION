import importlib
from src.stk_init import parse_args
from src.stk_runner import run

if __name__ == "__main__":
    args = parse_args()
    
    sim_name = input("Enter simulation module: ").strip()
    
    try:
        sim_module = importlib.import_module(f"simulations.{sim_name}")
        run(sim_module.main, mode=args.mode, scenario_name=args.name)
    except ModuleNotFoundError:
        print(f"Simulation '{sim_name}' not found. Ensure it's in the 'simulations' folder.")
