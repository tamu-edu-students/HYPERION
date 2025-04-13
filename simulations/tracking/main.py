"""
`main.py`

Code driver for the tracking project. Set up a main function for STK integration and run tracking optimization.
"""
from src import *
from .stk import stkmain

download_kernels()
load_kernels()

def othermain():
    from .simulate import run_ekf, run_monte_carlo, optimize_noise, evaluate_sensor_degradation
    from .analyze import plot_ekf, plot_monte_carlo, plot_trajectory_2D, plot_trajectory_3D, plot_altitude, plot_speed
    from .constants import LAUNCH_TIME

    # run_ekf()
    evaluate_sensor_degradation()
    # run_monte_carlo()
    # optimize_noise()
    # plot_ekf()
    # plot_monte_carlo()
    # plot_trajectory_2D(LAUNCH_TIME)
    # plot_trajectory_3D()
    # plot_altitude()
    # plot_speed()

if __name__ == "__main__":
    args = parse_args()
    # run(stkmain, mode=args.mode, name=args.name, clear=args.clear, days=args.days)
    othermain()