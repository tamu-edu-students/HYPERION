# <img src="figures/logo.jpg" alt="HYPERION Logo" width="200"/>

## Project HYPERION: Hypersonic Missile Intelligence Observation Network

---

### Overview
Project HYPERION aims to design and deploy a constellation of satellites for the detection, tracking, and observation of hypersonic missiles. This repository contains all files, scripts, and scenarios needed to simulate, optimize, and automate the observation network using Python and STK.

---

## Repository Structure

### [**scenarios**](./scenarios)
- STK scenario files for constellation simulations.

### [**automate**](./automate)
- Python scripts to interface with STK for automation and ease of simulation.

### [**DOE**](./DOE)
- Scripts to assist with post-processing and Design of Experiments (DOE) optimization.

---

## **How to Use**

1. **Setting up the STK Environment:**
    - Ensure you have the correct version of STK installed.
    - Verify that the required Python packages (e.g., `comtypes`, `pandas`, `numpy`, etc.) are installed.

2. **Running Simulations:**
    - Use the scenarios provided under the `./scenarios` directory.
    - For automated interaction with STK, run scripts from the `./automate` directory.

3. **Post-Processing and Optimization:**
    - Leverage scripts in the `./DOE` directory to analyze and optimize simulations.
