import os
from icecream import ic
from agi.stk12.stkobjects import *

class STKObjectBase:
    @classmethod
    def inspect(cls, stk_obj):
        """
        Inspects an STK object to determine its class, properties, and available methods.

        Parameters:
        - stk_obj: Any STK object.

        Returns:
        - Prints object type, available properties, and callable methods.
        """
        if stk_obj is None:
            print("Object is None.")
            return

        # Print the object's type
        print(f"\nInspecting STK Object: {stk_obj}")
        print(f"Object Type: {type(stk_obj)}\n")

        # List available attributes and methods
        print("Available Attributes & Methods:")
        for attr in dir(stk_obj):
            if not attr.startswith("_"):  # Skip private attributes
                try:
                    attr_value = getattr(stk_obj, attr)
                    if callable(attr_value):
                        print(f"{attr}()  # Method")
                    else:
                        print(f"{attr} = {attr_value}  # Property")
                except Exception as e:
                    print(f"{attr}: Could not retrieve - {e}")

        # If object has DataProviders, list them
        if hasattr(stk_obj, "DataProviders"):
            print("\nAvailable Data Providers:")
            try:
                for i in range(stk_obj.DataProviders.Count):
                    dp_name = stk_obj.DataProviders.Item(i).Name
                    print(f"- {dp_name}")
            except Exception as e:
                print(f"Could not retrieve DataProviders - {e}")

        print("\nInspection Complete.\n")

    def __init__(self, root, name, object_type, unload=True):
        self._identity = None # No STK identity initially
        self.root = root
        self.name = name
        self.object_type = object_type
        
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
                self._identity = parent_object.Children.Item(self.name)
            else:
                # Search at the scenario level for top-level objects
                self._identity = self.root.CurrentScenario.Children.Item(self.name)
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

        return self._identity.Path

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
        if self._identity:
            print(f"Object '{self.name}' is already loaded. Unloading it for reconfiguration...")
            self.unloadObject()
            self._identity = None  # Reset identity to ensure proper reloading

        project_root = os.getcwd()

        # Call the subclass-specific loading logic
        self._loadObjectImplementation()

        os.chdir(project_root) # Reset the working directory

        self._setObjectIdentity()

    def viewDataProviders(self):
        # Get DataProviders collection
        dp_collection = self._identity.DataProviders
        if dp_collection.Count == 0:
            print(f"Warning: No DataProviders found for '{self.name}'.")
            return

        # Print available DataProviders
        print(f"Available DataProviders for '{self.name}':")
        for i in range(dp_collection.Count):
            try:
                dp_name = dp_collection.Item(i).Name
                print(f"- {dp_name}")
            except Exception as dp_error:
                print(f"Error retrieving DataProvider at index {i}: {dp_error}")

    
class STKContainerObject(STKObjectBase):
    def __init__(self, root, name, object_type, unload=True):
        super().__init__(root, name, object_type, unload=unload)

    def addToObject(self, child_path):
        """
        Adds an object by STK path to the container.
        """
        child_name = child_path.rsplit('/', 1)[-1]

        try:
            # Access the container object and add the STK object using its path
            obj_to_add = self.root.GetObjectFromPath(child_path)
            if obj_to_add:
                self._identity.Objects.AddObject(obj_to_add)
                print(f"Added '{child_name}' to container '{self.name}'.")
        except Exception as e:
            print(f"Error adding '{child_name}' to container '{self.name}': {str(e)}")

    def removeFromObject(self, child_path):
        """
        Removes an object by STK path from the container if it exists.
        """
        child_name = child_path.rsplit('/', 1)[-1]

        try:
            # Access the container object and remove the STK object using its path
            obj_to_remove = self.root.GetObjectFromPath(child_path)
            if obj_to_remove:
                self._identity.Objects.RemoveObject(obj_to_remove)
                print(f"Removed '{child_name}' from container '{self.name}'.")
        except Exception as e:
            print(f"Error removing '{child_name}' from container '{self.name}': {str(e)}")


class STKStandaloneObject(STKObjectBase):
    def __init__(self, root, name, object_type, unload=True):
        super().__init__(root, name, object_type, unload=unload)

    @classmethod
    def _ensureSaveDir(cls):
        """
        Ensures the save directory exists for this object type.
        """
        try:
            if not os.path.exists(cls.save_dir):
                os.makedirs(cls.save_dir, exist_ok=True)
                print(f"Directory '{cls.save_dir}' created successfully.")
        except PermissionError:
            print(f"Error: No permission to create '{cls.save_dir}'")

    @classmethod
    def fromCSV(cls, root, row):
        """
        Creates an object from a CSV row.
        """
        raise NotImplementedError("Subclasses must implement the `from_csv` method.")

    @staticmethod
    def makeHeaders(filename):
        """
        Writes the appropriate csv and txt headers for saving object details.
        """
        raise NotImplementedError("Subclasses must implement the `makeHeaders` method.")
    
    def saveObject(self):
        """
        Saves object details to a txt and csv file.
        """
        raise NotImplementedError("Subclasses must implement the `saveObject` method.")