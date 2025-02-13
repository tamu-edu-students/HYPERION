# **Satellite Sensor Optimization for Project HYPERION**

---

## **1. Project Overview**
### **Goal**
Develop an **optimized measurement strategy** for a satellite-borne sensor to **track a hypersonic missile** efficiently. The project will:
- Define **sensor constraints** (Field of View (FoV) and slew rate).
- **Simulate a missile trajectory** and compute visibility access times.
- **Apply an Extended Kalman Filter (EKF)** to track the missile state from noisy measurements.
- **Optimize measurement scheduling** to maximize information gain while minimizing sensor movement.
- **Evaluate performance** by comparing different tracking strategies.

---

## **2. Workflow Outline**
### **Step 1: Define Sensor Constraints**
- Set **Field of View (FoV)**: The angular area the sensor can observe at any given moment.
- Set **Slew Rate**: The maximum angular velocity at which the sensor can reposition.

**Expected Outputs:**
- Defined **FoV limits** (e.g., 5° x 5°).
- Defined **maximum slew rate** (e.g., 2°/sec).

---

### **Step 2: Simulate Missile Trajectory & Compute Field of Regard**
- **Simulate a missile's trajectory in STK** using the **Great Arc propagator**.
- Compute **total field of regard access time** (how long the missile is within a satellite’s possible observation area).
- Determine **when and where the sensor can theoretically see the missile**.

**Expected Outputs:**
- **Missile trajectory file** (`missile_trajectory.csv`) containing `(time, lat, lon, alt, velocity)`.
- **Sensor access intervals** (`sensor_access.csv`).

---

### **Step 3: Simulate Noisy Measurements & Apply an  EKF**
- Assume the **sensor does not have perfect knowledge** of the missile’s state.
- **Simulate noisy measurements** of the missile's position using white noise.
- Apply a filter to:
  - Maintain a **state estimate** of the missile (position & velocity).
  - Track **state estimate covariance**, representing uncertainty.

**Expected Outputs:**
- **Noisy sensor measurements file** (`sensor_measurements.csv`).
- **Filtered missile trajectory file** (`state_estimates.csv`).

---

### **Step 4: Optimize Measurement Scheduling**
- At each **update step**, determine **the next best time** to take a measurement.
- The decision should be **real-time feasible** and based on:
  - **Information gain** (e.g., entropy reduction or uncertainty minimization).
  - **Slew cost** (avoid unnecessary sensor movement).
  - **Missile trajectory dynamics** (observe when the missile changes direction the most).

**Optimization Approaches to Try:**
- **Greedy Heuristic**: Select the next measurement that maximizes information gain.
- **Bayesian Optimization**: Tune parameters for when to take a measurement.
- **POMDP (Partially Observable Markov Decision Process)**: Formulate as a sequential decision-making problem.
- **Ant Colony Optimization (ACO)**: Treat as an optimal path problem.

**Expected Outputs:**
- **Optimized measurement schedule** (`optimized_observations.csv`).
- Sensor command script for **STK execution**.

---

### **Step 5: Evaluate Performance**
To determine which tracking strategy works best, compare different methods using the following objective metrics:

| **Metric** | **Definition** |
|------------|---------------|
| **Mean Squared Error (MSE)** | Measures how far the estimated trajectory is from the ground truth. |
| **Final Tracking Error** | Distance between the last estimated state and the true missile position. |
| **Slew Cost** | Measures total angular movement of the sensor. |
| **Number of Measurements Taken** | Lower is better if tracking accuracy remains high. |

**Expected Outputs:**
- Performance comparison table for different optimization frameworks.
- Plots showing **error vs. time, sensor movement vs. tracking accuracy**.

---

## **3. Deliverables**
- **Codebase** (`tracking/` folder) containing:
  - **Trajectory simulation scripts** (`simulate_missile.py`).
  - **Tracking algorithm** (`filter.py`).
  - **Measurement scheduling optimizer** (`optimize.py`).
  - **Performance evaluation script** (`analyze.py`).
- **Results & Reports**:
  - Final performance comparison plots.
  - Summary document detailing insights from different tracking strategies.
- **STK Scenario Files**:
  - `missile_trajectory.sc` (STK scenario with missile path).
  - `sensor_tasking.sc` (STK scenario with optimized observations)???

