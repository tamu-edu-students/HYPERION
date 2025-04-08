"""
`main.py`

Code driver for the tracking project. Set up a main function for STK integration and run tracking optimization.
"""
from src import *
from .stk import stkmain

def othermain():
    from .simulate import run_ekf, run_monte_carlo, optimize_noise
    from .analyze import plot_ekf, plot_monte_carlo, plot_trajectory_2D, plot_trajectory_3D

    # run_ekf()
    # run_monte_carlo()
    # optimize_noise()
    # plot_ekf()
    plot_monte_carlo()
    # plot_trajectory_2D("2025 MAR 19 22:21:50.000")
    # plot_trajectory_3D()

if __name__ == "__main__":
    args = parse_args()
    # run(stkmain, mode=args.mode, name=args.name, clear=args.clear, days=args.days)
    othermain()