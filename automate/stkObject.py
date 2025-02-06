from agi.stk12.stkobjects import *

def loadIfNotLoaded(func):
    """
    Decorator to check if the STK object is already loaded (i.e., self.identity is set).
    If it is, it unloads the existing object and then calls the decorated method to reload or reconfigure it.
    """
    def wrapper(self, *args, **kwargs):
        if self.identity is not None:
            print(f"Object '{self.name}' is already loaded. Unloading it for reconfiguration...")
            self.unloadObject()  # Unload the existing object
            self.identity = None  # Reset identity to ensure the object is properly recreated

        # Call the original loadObject function
        return func(self, *args, **kwargs)

    return wrapper


class STKObjectBase:
    def __init__(self, root, name, object_type, unload=True):
        self.root = root
        self.name = name
        self.object_type = object_type
        self.identity = None # No STK identity initially
        
        # Ensure no duplicates by deleting existing objects with the same name if unload is set to true
        if unload:
            self.unloadObject()
        else:
            self._setObjectIdentity()

    def _getObjectType(self):
        """
        Returns the object type as a string based on the object_type enum.
        """
        object_type_mapping = {
            AgESTKObjectType.eAircraft: "Aircraft",
            AgESTKObjectType.eSatellite: "Satellite",
            AgESTKObjectType.eConstellation: "Constellation",
            AgESTKObjectType.eChain: "Chain",
            AgESTKObjectType.eFacility: "Facility",
            AgESTKObjectType.eSensor: "Sensor"
        }

        return object_type_mapping.get(self.object_type, "Unknown")
    
    def _setObjectIdentity(self, parent_name=None,):
        """
        Sets the STK object identity.
        """
        try:
            if parent_name:
                # Search under the parent object
                parent_object = self.root.CurrentScenario.Children.Item(parent_name)
                self.identity = parent_object.Children.Item(self.name)
            else:
                # Search at the scenario level for top-level objects
                self.identity = self.root.CurrentScenario.Children.Item(self.name)
        except Exception:
            print(f"Object '{self.name}' not found.")

    def _loadObjectImplementation(self):
        """
        Placeholder for subclasses to implement their object-specific loading logic.
        """
        raise NotImplementedError("Subclasses must implement the `_loadObjectImplementation` method.")

    def getObjectPath(self):
        """
        Return STK path of an object.
        """
        self._setObjectIdentity()

        return self.identity.Path

    def unloadObject(self):
        """
        Deletes an existing object with the same name in the scenario to avoid duplication.
        """
        try:
            existing_object = self.root.CurrentScenario.Children.Item(self.name)
            if existing_object:
                print(f"Object '{self.name}' already exists. Deleting it...")
                existing_object.Unload()
                print(f"Object '{self.name}' deleted.")
        except Exception:
            print(f"No existing object named '{self.name}' found.")

    def loadObject(self):
        """
        Ensures the object is loaded properly, with unloading if needed.
        Calls the subclass-specific implementation of loading.
        """
        if self.identity is not None:
            print(f"Object '{self.name}' is already loaded. Unloading it for reconfiguration...")
            self.unloadObject()
            self.identity = None  # Reset identity to ensure proper reloading

        # Call the subclass-specific loading logic
        self._loadObjectImplementation()
    
    def saveObject(self):
        """
        Saves object details to a txt file.
        """
        raise NotImplementedError("Subclasses must implement the `saveObject` method.")
    
class STKContainerObject(STKObjectBase):
    def __init__(self, root, name, object_type, unload=True):
        super().__init__(root, name, object_type, unload=unload)

    def addToObject(self, child_path):
        """
        Adds an object by STK path to the container.
        """
        child_name = child_path.rsplit('/', 1)[-1]

        self._setObjectIdentity()

        try:
            # Access the container object and add the STK object using its path
            obj_to_add = self.root.GetObjectFromPath(child_path)
            if obj_to_add:
                self.identity.Objects.AddObject(obj_to_add)
                print(f"Added '{child_name}' to container '{self.name}'.")
        except Exception as e:
            print(f"Error adding '{child_name}' to container '{self.name}': {str(e)}")

class STKStandaloneObject(STKObjectBase):
    def __init__(self, root, name, object_type, unload=True):
        super().__init__(root, name, object_type, unload=unload)