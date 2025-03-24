"""
`main.py`

Code driver for the tracking project. Set up a main function for STK integration and run tracking optimization.
"""
from src import *
from .constants import *
from .stk import stkmain
from .simulate import run_ekf, run_monte_carlo,optimize_noise
from .analyze import *

if __name__ == "__main__":
    # args = parse_args()
    # run(stkmain, mode=args.mode, name=args.name, clear=args.clear, days=args.days)
    run_ekf()
    # run_monte_carlo(5)
    # optimize_noise()
    plot_ekf()
    # plot_monte_carlo()
    # plot_trajectory()