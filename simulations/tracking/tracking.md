# **Tracking Optimization for Project HYPERION**

<div style="text-align: center;">
    <img src="../../figures\tasking-schematic.png" alt="Tasking schematic" width="800"/>
</div>

---

## **1. Project Overview**
### **Goal**
Optimize measurement scheduling for a satellite-borne sensor to efficiently track a hypersonic missile by:
- **Defining sensor constraints** (FoV, FoR, slew rate, range, integration time, etc.).
- **Simulating a missile trajectory** and computing visibility access times using STK.
- **Generating Azimuth-Elevation-Range (Az-El-Range) measurements** from sensor access intervals.
- **Applying a filtering approach** to estimate the missile state from noisy measurements.
- **Optimizing measurement scheduling** to minimize uncertainty and tracking error.

---

## **2. Project Structure**
### **`stk.py` — STK Integration**
Handles all interactions with STK, including:
- **Loading satellites** (30 LEO satellites based on HYPERION orbital parameters).
- **Loading the sensor**, applying constraints:
  - FoR: ±X°
  - FoV: ±X°
  - LoS and range constraints
  - Targeting mechanism (to be updated for adaptive tracking).
- **Loading the missile trajectory** (ECF ground truth).
- **Computing access intervals** between sensors and the missile.
- **Selecting the optimal sensor** (longest continuous access).
- **Extracting Az-El-Range measurements** for this access interval.

---

### **`simulate.py` — Filtering & State Estimation**
Implements missile tracking and state estimation:
- **Defines missile dynamics** using `DynamicsModel`:
  - Two-body gravity model.
  - Potential addition of atmospheric drag.
- **Loads and transforms sensor measurements**:
  - Uses `MeasurementModel` to handle Az-El-Range data.
  - Transforms Az-El-Range to ECI coordinates.
  - Simulates process noise and enforces constraints (slew rate, integration time, data budget).
- **Runs the Kalman Filter**:
  - Initializes state estimate from ground truth.
  - Updates state and covariance using sensor measurements.
- **Outputs results**:
  - Prior and posterior covariance per time step.
  - Estimated trajectory over time.
  - Plots tracking error vs. time and estimated trajectory evolution.

---

### **`optimize.py` — Measurement Scheduling Optimization**
Optimizes the sensor measurement strategy using filtering outputs:
- **Defines an objective function** based on:
  - Information gain (entropy reduction, uncertainty minimization).
  - Slew cost (reducing unnecessary sensor movement).
  - Missile maneuvering dynamics.
- **Optimizes measurement scheduling** using:
  - Greedy heuristics.
  - `scipy.optimize`
- **Outputs optimized results**:
  - Optimal measurement schedule.
  - Performance metrics for tracking strategies.
  - Required control inputs (pointing direction and slew rate).

---

### **`main.py` — Project Execution Driver**
- Integrates **STK processing (`stk.py`)** with **simulation (`simulate.py`)**.
- Runs tracking and optimization pipeline.
- Generates final results, including estimated trajectories and performance metrics.

---
## **3. Deliverables**
- **Codebase** (`tracking/` folder):
  - `stk.py` (STK integration).
  - `simulate.py` (state estimation and filtering).
  - `optimize.py` (measurement scheduling optimization).
  - `main.py` (end-to-end execution).
- **Results & Reports**:
  - Performance evaluation plots and comparison of tracking methods.
  - Summary of optimized scheduling strategies.
- **STK Scenario Files**:
  - `tracking.sc` (STK tracking scenario).

---