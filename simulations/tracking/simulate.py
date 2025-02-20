"""
`simulate.py`

This is where the filter and simulation logic is hosted.

- Initialize appropriate dynamics
    - Use DynamicsModel class
    - Two body gravity model
    - Maybe add atmospheric drag
- Initialize measurement model
    - Use MeasurementModel class
    - Load Az-El-Range measurements taken from STK
    - Determine transformation from Az-El-Range to ECI?
    - Simulate process noise
    - Enforce slew rate constraint
    - Enforce integration time constraint
    - Enforce data budget constraint?
- Run Kalman Filter
    - Get ECI initial state from ground truth 
    - Initialize a state estimate and state estimate error covariance
    - Kalman equations
- Determine command inputs? 

- Output prior and posterior covariance at each time step
- Output state estimate over time

- Plot error between ground truth and state estimate over time
- Plot estimated trajectory over time
"""