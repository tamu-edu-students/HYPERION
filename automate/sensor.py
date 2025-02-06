from agi.stk12.stkobjects import *
from agi.stk12.stkutil import *
from stkObject import STKStandaloneObject

class Sensor(STKStandaloneObject):
    def __init__(self, root, satellite_name, sensor_name, conic_angle, unload=True):
        """
        Initializes a simple conic sensor attached to a given satellite.
        
        Parameters:
        - root: The STK root object.
        - satellite_name: The name of the satellite to attach the sensor to.
        - sensor_name: The name of the sensor.
        - conic_angle: The conic angle (field of regard) in degrees.
        """
        super().__init__(root, sensor_name, AgESTKObjectType.eSensor, unload)
        self.satellite_name = satellite_name
        self.conic_angle = conic_angle

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
            sensor.Pattern.ConeAngle = self.conic_angle

            # Set sensor pointing along Nadir (directly downward)
            sensor.CommonTasks.SetPointingFixedEuler(
                AgEEulerOrientationSequence.e312, 0, 0, 0  # Nadir-aligned (0, 0, 0)
            )

            print(f"Sensor '{self.name}' attached to satellite '{self.satellite_name}' with a conic angle of {self.conic_angle}°.")

        except Exception as e:
            print(f"Error creating sensor '{self.name}' on satellite '{self.satellite_name}': {str(e)}")

    def getObjectPath(self):
        """
        OVERLOADED: Return STK path of an object.
        """
        self._setObjectIdentity(self.satellite_name)

        return self.identity.Path

    def saveObject(self):
        """
        TODO: Might be unecessary?
        """
        return