"""
`simulate.py`

This is where the filter and simulation logic is hosted.
"""
import os
import numpy as np
import time 
from .constants import *

def initialize(x0):
    ### Dynamics ###
    # Input
    u = np.zeros((6, 1))

    # Input matrix
    G =  np.zeros((6, 6))

    # Spectral density matrix
    qs = 0
    Qs = np.diag([0, 0, 0, qs, qs, qs])  # Small process noise on velocity

    # Create dynamics model object
    # dynamics = DynamicsModel(x0, compute_F, u, G, Qs, mu_E)

    # return dynamics

def simulate():
    print(f"Starting simulation...")
    
    start = time.time()

    ground_truth = np.load(os.path.join(DATA_DIR, MISSILE_STORE_FILENAME), allow_pickle=True).item()

    # Extract true states 
    xk_ground_arr = ground_truth["states"] 
    x0 = xk_ground_arr[0].reshape(-1, 1)

    # Extract final time 
    tf = ground_truth["times"][-1]  

    # Initialize dynamics model
    dynamics = initialize(x0)

    # Simulation parameters
    tk = 0  # Current simulation time
    tkm1 = 0  # Previous simulation time
    dt = 1  # Time step size

    # Initial state
    xk = dynamics.get_x0()
    xkm1 = dynamics.get_x0()

    # Storage arrays
    tk_arr = [tk]  # Time steps for simulation
    xk_arr = [xk.flatten()]  # Store states
    wk_arr = []  # Store process noise samples (one less than states)

    while tk < tf:
        # Update time and previous state
        tkm1 = tk
        xkm1 = xk
        tk += dt  # Advance time step

        # Propagate state forward
        xk, wkm1 = dynamics.get_xk(tk, tkm1, xkm1, return_wkm1=True)

        # Store results
        xk_arr.append(xk.flatten())
        wk_arr.append(wkm1.flatten())
        tk_arr.append(tk)

    end = time.time()
    duration = end - start

    np.save(os.path.join(DATA_DIR, EKF_STORE_FILENAME), {"times": np.array(tk_arr), "states": np.array(xk_arr), "process noise": np.array(wk_arr)})

    print(f"Simulation completed after {duration:.2f} s.")