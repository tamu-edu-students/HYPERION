# <img src="figures/logo.jpg" alt="HYPERION Logo" width="200"/>

# Project HYPERION: Hypersonic Missile Intelligence Observation Network

---

## Overview

Project HYPERION aims to design and deploy a constellation of satellites for the detection, tracking, and observation of hypersonic missiles. This repository contains all files, scripts, and scenarios needed to simulate, optimize, and automate the observation network using Python and STK.

--- 

## Installation and Setup
1. Ensure STK is installed and the Python API is set up properly. If not, see **Installing the STK Python API** below.
2. Navigate to the desired host directory.
3. Run the following commands below:
```bash
git clone https://github.com/tamu-edu-students/HYPERION.git
cd HYPERION
python -m pip install -r requirements.txt
```

---

## Repository Structure

### [**scenarios/**](./scenarios)
- Contains STK scenario files for simulating different constellation configurations.

### [**src/objects/**](./src/objects)
- Python class library for interfacing with STK and performing simulation-based optimization.

### [**simulations/**](./simulations)
- Various test simulations and validation scenarios that leverage the object library.

---

## **How to Use**

This repository extends **STK’s object model** by providing a **class-based framework** for direct simulation within STK.  
A typical workflow involves **extending the class library**, writing **new simulation scripts**, and running them efficiently using **command-line flags**.

---

### **Extending the Class Library**
Users can enhance STK simulations by adding:
- **Custom Constraints** → Define specific conditions for **communications, sensors, tracking, or visibility**.
- **New Functionalities** → Implement **sensor slewing algorithms, tracking performance analysis, or dynamic targeting**.

Example:

```python
class AdvancedSensor(Sensor):
    def __init__(self, root, satellite_name, sensor_name, conic_angle, slew_rate):
        super().__init__(root, satellite_name, sensor_name, conic_angle)
        self.slew_rate = slew_rate  # Slew rate for tracking targets dynamically
```

---

### **Running Simulations**
There are two ways to run simulations:

1. **Using run.py (Recommended)** → Dynamically selects and runs any simulation.
2. **Running a script directly** → Execute specific simulation modules.

#### **Option 1: Running Simulations via run.py (Recommended)**
The easiest way to run any simulation is using `run.py`.

Follow these steps:

1. **Create a new simulation file** in `simulations/`.
2. Import all necessary functions from `src/`, or simply import all.
3. The script should contain a `main(root)` function that executes the tasks.

Example: `simulations/test.py`

```python
from src import * 
def main(root):
    print("Running missile simulation...")
    missile = Missile(root, name="MyMissile")
    missile.loadObject()
```

4. Run the following command from the project root:

```bash
python -m simulations.run --mode engine --name TestScenario
```

This launches `run.py`, which will prompt you to enter a simulation name. 
Enter the name of the simulation module, e.g., `test`.

The script will execute using the specified STK mode.

#### **Explanation of Command-Line Flags**
The script accepts flags to control how STK runs:

| Flag      | Usage                                   | Description  |
|---------------|--------------------------|--------------|
| `--mode`  | `--mode desktop` or `--mode engine`   | Runs STK in either Desktop (GUI) or Engine (headless, faster) mode. |
| `--name`  | `--name TestScenario`                 | Specifies a scenario name to save results in `scenarios/{name}/{name}.sc`. |

> Note that by default, engine mode is chosen.

> Note that if the `--name` flag is not specified, the program will attempt to attach to a running instance of STK. Otherwise, the scenario **will not** be saved.

Example:

```bash
python -m simulations.run --mode desktop --name TestScenario
```

This starts STK in Desktop mode, creates a scenario named `TestScenario`, and runs the selected simulation.

#### **Engine Mode vs. Desktop Mode**

| Mode     | Features | Recommended For  |
|----------|---------|------------------|
| **Engine** | Faster (10x), no GUI, runs headless | Large-scale automated simulations |
| **Desktop** | Full GUI, visual feedback | Interactive debugging and visualization |

#### **Option 2: Running a Simulation Script Directly**
If you prefer, you can run a simulation file directly. 

To do this, ensure your module includes the following code:

```python
if __name__ == "__main__":
    args = parse_args()
    run(main, mode=args.mode, scenario_name=args.name)
    # Additional code goes here
```

You can add additional functionality at the end of the script (e.g., for plotting or post-processing purposes). See [`simulations/missile_sim`](./simulations/missile_sim.py) for an example.

To execute the script directly, run:

```bash
python -m simulations.test --mode engine --name TestScenario
```

This bypasses `run.py` and executes the simulation script directly. This method is useful when extra analysis beyond running the simulation is required.


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

## **Additional Resources**

For additional documentation, refer to:

- [STK Developer Kit](https://help.agi.com/stkdevkit/index.htm)
- [STK Code Examples](https://github.com/AnalyticalGraphicsInc/STKCodeExamples)

