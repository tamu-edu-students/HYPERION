# <img src="figures/logo.jpg" alt="HYPERION Logo" width="200"/>

# Project HYPERION: Hypersonic Missile Intelligence Observation Network

---

## Overview

Project HYPERION aims to design and deploy a constellation of satellites for the detection, tracking, and observation of hypersonic missiles. This repository contains all files, scripts, and scenarios needed to simulate, optimize, and automate the observation network using Python and STK.

---

## Repository Structure

### [**scenarios/**](./scenarios)
- Contains STK scenario files for simulating different constellation configurations.

### [**src/objects/**](./src/objects)
- Python class library for interfacing with STK and performing simulation-based optimization.

### [**src/utilities/**](./src/utilities)
- Utility functions to support the class library and simulation framework.

### [**simulations/**](./simulations)
- Various test simulations and validation scenarios that leverage the object library.

---

## **How to Use**

This repository is designed to extend STK’s object model by developing a class-based framework for direct simulation within STK. A typical workflow involves:

1. **Extending the Class Library**  
   - Add constraints for communication systems, sensors, and other components.  
   - Implement new functionalities such as sensor slewing algorithms or tracking performance analysis.

2. **Running Simulations**  
   - Use the provided test scenarios in `simulations/` to validate functionality.  
   - Modify existing simulations or create new ones to explore different constraints and performance metrics.

3. **Interfacing with STK**  
   - STK provides both an **Engine API** and **Desktop Attach** functionality for running simulations.  
   - To connect STK with Python, ensure the STK Python API is installed.

---

## **Installing the STK Python API**

To interface with STK via Python, follow these steps:

1. **Locate the STK Installation Directory**  
   - Open the STK installation folder on your system.

2. **Find the STK Python API Package**  
   - Navigate to the following path within the STK installation directory:  
     ```
     bin/AgPythonAPI/
     ```
   - Look for the `.whl` file with a name similar to:  
     ```
     agi.stk12-12.9.0-py3-none-any.whl
     ```
   - Copy the full path to this file.

3. **Install the STK Python API**  
   - Open a terminal and run the following command, replacing `<path-to-whl>` with the actual file path:
     ```sh
     python -m pip install "<path-to-whl>/agi.stk12-12.9.0-py3-none-any.whl"
     ```
   - Verify the installation by running:
     ```sh
     python -c "import agi.stk12; print('STK API successfully installed')"
     ```

---

## **Connecting to STK**

Once the API is installed, users can leverage STK’s object model along with the HYPERION object library to build and analyze simulation scenarios.

- Use test simulations in [`./simulations/`](./simulations) to verify STK connectivity.
- Modify existing scenarios or create new ones to implement constraints and optimize tracking performance.

For additional documentation, refer to:

- [STK Developer Kit](https://help.agi.com/stkdevkit/index.htm)
- [STK Code Examples](https://github.com/AnalyticalGraphicsInc/STKCodeExamples)

