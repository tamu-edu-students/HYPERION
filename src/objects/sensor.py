from agi.stk12.stkobjects import *
from agi.stk12.stkutil import *
from agi.stk12.utilities.colors import Colors
from typing import Tuple
import numpy as np
from .stkObject import STKStandaloneObject

r, g, b = 0, 255, 0
COLOR = Colors.FromRGB(r, g, b)

class Sensor(STKStandaloneObject):
    save_dir = "data/sensors/"

    @classmethod
    def attach(cls, root: AgStkObjectRoot, satellite_name: str, sensor_name: str, mode: str="scanning"):
        """
        Attaches to an already existing sensor in STK and returns a Sensor object.

        Parameters
        ----------
        - root : The STK root object.
        - satellite_name : The name of the satellite that has the sensor.
        - sensor_name : The name of the sensor.
        - mode: Toggle between "scanning" and "tracking" modes. If using "tracking", be sure to assign an object to be tracked.

        Returns
        -------
        - sensor_instance : A Sensor object linked to the existing STK sensor.
        """
        try:
            # Locate the satellite in STK
            satellite = root.CurrentScenario.Children.Item(satellite_name)

            # Locate the sensor in STK
            sensor_obj = satellite.Children.Item(sensor_name)

            # Create a new Sensor instance but do NOT reload it
            sensor_instance = cls(root, satellite_name, sensor_name, FoV=0, FoR=0, mode=mode)  # Placeholder values

            # Set identity to the existing sensor
            sensor_instance._identity = sensor_obj

            print(f"Attached to existing sensor '{sensor_name}' on satellite '{satellite_name}'.")

            return sensor_instance

        except Exception as e:
            print(f"Error: Could not attach to sensor '{sensor_name}' on satellite '{satellite_name}': {str(e)}")
            return None

    def __init__(self, root: AgStkObjectRoot, satellite_name: str, sensor_name: str, FoV: float, FoR: float, mode: str="scanning"):
        """
        Initializes a simple conic sensor attached to a given satellite.
        
        Parameters
        ----------
        - root: The STK root object.
        - satellite_name: The name of the satellite to attach the sensor to.
        - sensor_name: The name of the sensor.
        - FoV: The field of view in degrees.
        - FoR: The field of regard in degrees.
        - mode: Toggle between "scanning" and "tracking" modes. If using "tracking", be sure to assign an object to be tracked.
        """

        Sensor._ensureSaveDir()

        super().__init__(root, sensor_name, AgESTKObjectType.eSensor)
        self.satellite_name = satellite_name
        self.FoV = FoV
        self.FoR = FoR
        self.mode = mode 

        if mode not in ["scanning", "tracking"]:
            raise RuntimeError("Sensor mode can either be 'scanning' or 'tracking'.") 

    def _loadObjectImplementation(self):
        """
        Creates and configures the sensor on the specified satellite.
        """
        try:
            # Access the satellite object
            satellite = self.root.CurrentScenario.Children.Item(self.satellite_name)

            # Create the sensor attached to the satellite
            sensor = satellite.Children.New(AgESTKObjectType.eSensor, self.name)

            # Set the sensor type to simple conic and configure its properties
            sensor.SetPatternType(AgESnPattern.eSnSimpleConic)
            sensor.Pattern.ConeAngle = self.FoV / 2

            if self.mode == "scanning":
                sensor.SetPointingType(AgESnPointing.eSnPtSpinning)
                spinning = sensor.Pointing 
                spinning.SpinRate = 1

            # FoR Constraint
            minmax = sensor.AccessConstraints.AddConstraint(AgEAccessConstraints.eCstrAzimuthAngle)
            minmax.EnableMin = True
            minmax.Min = -self.FoR / 2
            minmax.EnableMax = True 
            minmax.Max = self.FoR / 2 

            print(f"Sensor '{self.name}' attached to satellite '{self.satellite_name}'.")
            
        except Exception as e:
            print(f"Error creating sensor '{self.name}' on satellite '{self.satellite_name}': {str(e)}")
    
    def addTarget(self, target_name: str):
        """
        Assigns an object to be tracked by the sensor.

        Parameters
        ---------
        target_name: The name of the object to be assigned.
        """

        if self.mode != "tracking":
            raise RuntimeError("Objects can only be assigned to targeted sensors.")
        
        try:
            target_path = self.root.CurrentScenario.Children.GetItemByName(target_name).Path

            self._identity.CommonTasks.SetPointingTargetedTracking( AgETrackModeType.eTrackModeReceive, AgEBoresightType.eBoresightRotate, target_path)

        except Exception as e:
            print(f"Error assigning object '{target_name}' to sensor '{self.name}': {str(e)}")

    def computeAzEl(self, target_name: str, step_size: int = 1) -> Tuple[np.ndarray, np.ndarray, np.ndarray]:
        """
        Computes azimuth and elevation angles between a sensor and a target.

        Parameters
        ----------
        target_name : str
            The name of the target object to be assigned.
        step_size : int
            The time granularity for saving data [s].

        Returns
        -------
        Tuple[np.ndarray, np.ndarray, np.ndarray]
            - t_store: The timestamps of measurements.
            - az_store: Azimuth angles [deg].
            - el_store: Elevation angles [deg].
        """
        try:
            # Switch to EpSec format
            self.root.UnitPreferences.Item("DateFormat").SetCurrentUnit("EpSec")

            # Get target object
            target_object = self.root.CurrentScenario.Children.GetItemByName(target_name)

            # Compute access
            access = self._identity.GetAccessToObject(target_object)
            access.ComputeAccess()

            # Access the AER Data provider correctly
            dp_aer_group = access.DataProviders.GetItemByName("AER Data")
            dp_aer = dp_aer_group.Group.GetItemByName("Default")

            # Execute query
            results = dp_aer.Exec(self.root.CurrentScenario.StartTime, 
                                self.root.CurrentScenario.StopTime, 
                                step_size)

            # Extract time, azimuth, and elevation
            t_store = np.array(results.DataSets.GetDataSetByName("Time").GetValues(), dtype=float)
            az_store = np.array(results.DataSets.GetDataSetByName("Azimuth").GetValues(), dtype=float)
            el_store = np.array(results.DataSets.GetDataSetByName("Elevation").GetValues(), dtype=float)

            print(f"Computed {len(t_store)} az/el measurements for '{self.name}' tracking '{target_name}'.")

            return t_store, az_store, el_store

        except Exception as e:
            print(f"Error computing azimuth/elevation from sensor '{self.name}' to target '{target_name}': {str(e)}")
            return np.array([]), np.array([]), np.array([])

        finally:
            # Switch back to UTCG
            self.root.UnitPreferences.Item("DateFormat").SetCurrentUnit("UTCG")


    def saveObject(self):
        """
        TODO: Might be unecessary?
        """
        return