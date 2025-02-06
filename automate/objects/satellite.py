from agi.stk12.stkobjects import *
from agi.stk12.stkutil import *
from .stkObject import STKStandaloneObject

COLOR = 16711680 # Standard blue

class Satellite(STKStandaloneObject):
    def __init__(self, root, name, a, i, Omega, omega=0, e=0, M=0, epoch=None, unload=True):
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
        super().__init__(root, name, AgESTKObjectType.eSatellite, unload=unload)
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
        # satellite.Graphics.Attributes.Color = COLOR
        # satellite.Graphics.Attributes.Line.Width = 0.05

        # Set propagator to J2 perturbation for realistic orbital modeling
        satellite.SetPropagatorType(AgEVePropagatorType.ePropagatorJ4Perturbation)
        satellite.Propagator.Propagate()

        print(f"Satellite {self.name} loaded with RAAN={self.Omega}° and Mean Anomaly={self.M}°.")

    def saveObject(self):
        """
        TODO
        """
        return
