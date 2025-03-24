"""
`main.py`

Code driver for the tracking project. Set up a main function for STK integration and run tracking optimization.
"""
from src import *
from .constants import *
from .stk import stkmain
from .simulate import simulate
from .analyze import *

if __name__ == "__main__":
    # args = parse_args()
    # run(stkmain, mode=args.mode, name=args.name, clear=args.clear, days=args.days)
    simulate()
    plot_ekf()
    plot_trajectory()