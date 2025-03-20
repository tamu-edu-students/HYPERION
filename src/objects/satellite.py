import os
import csv
import numpy as np
from icecream import ic
from agi.stk12.stkobjects import *
from agi.stk12.stkutil import *
from agi.stk12.utilities.colors import Colors
from typing import Tuple
from .stkObject import STKStandaloneObject


r, g, b = 0, 0, 255
COLOR = Colors.FromRGB(r, g, b)

class Satellite(STKStandaloneObject):
    save_dir =  "data/satellites/"

    @classmethod
    def attach(cls, root: AgStkObjectRoot, satellite_name: str):
        """
        Attaches to an already existing satellite in STK and returns a Satellite object.

        Parameters
        ----------
        - root : The STK root object.
        - satellite_name : The name of the satellite in STK.

        Returns
        -------
        - satellite_instance : A Satellite object linked to the existing STK satellite.
        """
        try:
            # Locate the satellite in STK
            satellite_obj = root.CurrentScenario.Children.Item(satellite_name)

            # Ensure it is a satellite
            if satellite_obj.ClassType != AgESTKObjectType.eSatellite:
                raise TypeError(f"Object '{satellite_name}' exists but is not a Satellite.")

            # Create a new Satellite instance but do NOT reload it
            satellite_instance = cls(root, satellite_name, a=0, i=0, Omega=0)  # Placeholder values

            # Set identity to the existing satellite
            satellite_instance._identity = satellite_obj

            print(f"Attached to existing satellite '{satellite_name}'.")

            return satellite_instance

        except Exception as e:
            print(f"Error: Could not attach to satellite '{satellite_name}': {str(e)}")
            return None

    def __init__(self, root: AgStkObjectRoot, name: str, a: float=None, i: float=None, Omega: float=None, omega:float=0, e:float=0, M:float=0, epoch=None):
        """
        Initializes a satellite in STK with orbital parameters for circular or eccentric orbits.
        
        Parameters
        ----------
        - root: The STK root object.
        - name: The name of the satellite.
        - a: Semi-major axis (km).
        - i: Inclination (deg).
        - Omega: Right Ascension of Ascending Node (deg).
        - omega: Argument of perigee (deg) [default = 0 for circular orbits].
        - e: Eccentricity [default = 0 for circular orbits].
        - M: Mean anomaly (deg) [default = 0].
        - epoch: The satellite's epoch [default is the scenario start time].
        """
        Satellite._ensureSaveDir()

        super().__init__(root, name, AgESTKObjectType.eSatellite)

        if a is None or i is None or Omega is None:
            raise RuntimeError("If not connecting to an existing object, orbital parameters must be defined.")
        else:
            self.a = a
            self.i = i
            self.Omega = self._wrapTo360(Omega)
            self.omega = self._wrapTo360(omega)
            self.e = e
            self.M = self._wrapTo360(M)

        # Set the epoch to the scenario start time if not specified
        if epoch is None:
            self.epoch = root.CurrentScenario.StartTime
        else:
            self.epoch = epoch

    def _wrapTo360(self, angle):
        """
        Wraps an angle to the range [0, 360).
        """
        return angle % 360

    def _loadObjectImplementation(self):
        """
        Configures the satellite's orbit using Keplerian elements and propagates it.
        """
        # Create or access the satellite object
        satellite = self.root.CurrentScenario.Children.New(AgESTKObjectType.eSatellite, self.name)

        # Convert the initial state to Keplerian classical orbital elements
        keplerian = satellite.Propagator.InitialState.Representation.ConvertTo(AgEOrbitStateType.eOrbitStateClassical)
        keplerian.SizeShape.SemiMajorAxis = self.a
        keplerian.SizeShape.Eccentricity = self.e
        keplerian.Orientation.Inclination = self.i
        keplerian.Orientation.ArgOfPerigee = self.omega
        keplerian.Orientation.AscNode.Value = self.Omega
        keplerian.LocationType = AgEClassicalLocation.eLocationMeanAnomaly
        keplerian.Location.Value = self.M

        # Set the coordinate system and epoch
        keplerian.CoordinateSystemType = AgECoordinateSystem.eCoordinateSystemJ2000
        keplerian.Epoch = self.epoch

        # Assign the configuration and propagate
        satellite.Propagator.InitialState.Representation.Assign(keplerian)

        satellite.Graphics.Attributes.Color = COLOR
        # satellite.Graphics.Attributes.Line.Width = 0.05

        # Set propagator to J2 perturbation for realistic orbital modeling
        satellite.SetPropagatorType(AgEVePropagatorType.ePropagatorJ4Perturbation)
        satellite.Propagator.Propagate()

        print(f"Satellite '{self.name}' loaded with RAAN={self.Omega}° and Mean Anomaly={self.M}°.")

    @staticmethod
    def makeHeaders(filename):

        # Define file paths
        file_path_txt = os.path.join(Satellite.save_dir, f"{filename}.txt")
        file_path_csv = os.path.join(Satellite.save_dir, f"{filename}.csv")

        # Ensure the directory exists
        os.makedirs(Satellite.save_dir, exist_ok=True)

        # ---------------- TXT FILE HEADER ----------------
        with open(file_path_txt, 'w', encoding="utf-8") as file:
            file.write("Satellite Object Details\n")
            file.write("======================\n")

        # ---------------- CSV FILE HEADER ----------------
        with open(file_path_csv, 'w', newline='', encoding="utf-8") as file:
            writer = csv.writer(file)
            
            writer.writerow(["Satellite Name", "a", "i", "Omega", "omega", "e", "M"])

        print(f"Headers created for {file_path_txt} and {file_path_csv}.")

    def saveObject(self, filename):
        """
        Appends the satellite's details to existing text and CSV files.

        Parameters:
        - file_name (str): Custom filename (without extension).

        Raises:
        - FileNotFoundError: If the target file does not exist.
        """

        file_path_txt = os.path.join(self.save_dir, f"{filename}.txt")
        file_path_csv = os.path.join(self.save_dir, f"{filename}.csv")

        # Check if files exist before attempting to write
        if not os.path.exists(file_path_txt) or not os.path.exists(file_path_csv):
            raise FileNotFoundError(f"Error: One or both files do not exist. Ensure headers are created before appending data.\n"
                                    f"Missing: {'TXT' if not os.path.exists(file_path_txt) else ''} "
                                    f"{'CSV' if not os.path.exists(file_path_csv) else ''}")

        # ---------------- TXT FILE HANDLING ----------------
        with open(file_path_txt, 'a', encoding="utf-8") as file:
            file.write(f"Satellite Name: {self.name}\n")
            file.write(f"a: {self.a} km\n")
            file.write(f"i: {self.i} deg\n")
            file.write(f"Omega: {self.Omega} deg")
            file.write(f"omega: {self.omega} deg")
            file.write(f"e: {self.e}")
            file.write(f"M: {self.M}")
            file.write("\n")

        print(f"Satellite details appended to {file_path_txt}.")

        # ---------------- CSV FILE HANDLING ----------------
        with open(file_path_csv, 'a', newline='', encoding="utf-8") as file:
            writer = csv.writer(file)


            writer.writerow([self.name, 
                            self.a,
                            self.i,
                            self.Omega,
                            self.omega,
                            self.e,
                            self.M])

        print(f"Satellite details appended to {file_path_csv}.")

    def getECIState(self, start_time: str = None, end_time: str = None, step_size: int = 1) -> Tuple[np.ndarray, np.ndarray]:
        """
        Extracts ECI position and velocity for the satellite at a given time step.

        Parameters
        ----------
        - start_time: The start time for data extraction (default: scenario start).
        - end_time: The end time for data extraction (default: scenario end).
        - step_size : The time granularity for saving data in seconds (default: 1s).

        Returns
        -------
        - t_store: The timestamps of the flight path.
        - states: The ECI states through the flight path.
        """

        try:
            # Set default times if not provided
            if start_time is None:
                start_time = self.root.CurrentScenario.StartTime
            if end_time is None:
                end_time = self.root.CurrentScenario.StopTime


            self.root.UnitPreferences.Item("DateFormat").SetCurrentUnit("EpSec")

            # Access the data providers
            dp_val_position = self._identity.DataProviders.GetItemByName("Cartesian Position")
            dp_val_velocity = self._identity.DataProviders.GetItemByName("Cartesian Velocity")

            # Get the J2000 (ECI) frame
            object_dp_position = dp_val_position.Group.GetItemByName("J2000")
            object_dp_velocity = dp_val_velocity.Group.GetItemByName("J2000")

            # Execute the query
            position = object_dp_position.Exec(start_time, end_time, step_size)  # km
            velocity = object_dp_velocity.Exec(start_time, end_time, step_size)  # km/s

            # Extract times
            t_store = np.array(position.DataSets.GetDataSetByName("Time").GetValues(), dtype=float)

            # Extract position 
            x = np.array(position.DataSets.GetDataSetByName("x").GetValues(), dtype=float)
            y = np.array(position.DataSets.GetDataSetByName("y").GetValues(), dtype=float)
            z = np.array(position.DataSets.GetDataSetByName("z").GetValues(), dtype=float)

            # Extract velocity
            x_dot = np.array(velocity.DataSets.GetDataSetByName("x").GetValues(), dtype=float)
            y_dot = np.array(velocity.DataSets.GetDataSetByName("y").GetValues(), dtype=float)
            z_dot = np.array(velocity.DataSets.GetDataSetByName("z").GetValues(), dtype=float)

            # Combine into state matrix
            states = np.column_stack((x, y, z, x_dot, y_dot, z_dot))

        finally:
            # Switch back to UTCG for further computations
            self.root.UnitPreferences.Item("DateFormat").SetCurrentUnit("UTCG")

        return t_store, states
