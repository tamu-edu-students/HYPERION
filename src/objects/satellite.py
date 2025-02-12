import os
import csv
from agi.stk12.stkobjects import *
from agi.stk12.stkutil import *
from agi.stk12.utilities.colors import Colors
from .stkObject import STKStandaloneObject

r, g, b = 0, 0, 255
COLOR = Colors.FromRGB(r, g, b)

class Satellite(STKStandaloneObject):
    def __init__(self, root, name, a, i, Omega, omega=0, e=0, M=0, epoch=None, save_dir="data/satellites/", unload=True):
        """
        Initializes a satellite in STK with orbital parameters for circular or eccentric orbits.
        
        Parameters:
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
        super().__init__(root, name, AgESTKObjectType.eSatellite, save_dir, unload=unload)
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

        print(f"Satellite {self.name} loaded with RAAN={self.Omega}° and Mean Anomaly={self.M}°.")

    def saveObject(self, file_name):
        """
        Appends the satellite's details to existing text and CSV files.

        Parameters:
        - file_name (str): Custom filename (without extension).

        Raises:
        - FileNotFoundError: If the target file does not exist.
        """

        file_path_txt = os.path.join(self.save_dir, f"{file_name}.txt")
        file_path_csv = os.path.join(self.save_dir, f"{file_name}.csv")

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
