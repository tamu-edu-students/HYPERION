"""
`main.py`

Code driver for the tracking project. Set up a main function for STK integration and run tracking optimization.
"""
import os
from src import *
from .stk import stkmain
from .constants import *

if __name__ == "__main__":
    args = parse_args()
    run(stkmain, mode=args.mode, name=args.name, clear=args.clear, days=args.days)