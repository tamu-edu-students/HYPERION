import os
from icecream import ic
from agi.stk12.stkobjects import *

class STKObject:
    @classmethod
    def inspect(cls, stk_obj: AgStkObject):
        """
        Inspects an STK object to determine its class, properties, and available methods.

        Parameters
        ----------
        - stk_obj: Any STK object.
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
                        # If the attribute is another STK object, show its type cleanly
                        if "stk" in str(type(attr_value)):  
                            print(f"{attr} = <{type(attr_value).__name__}>  # Property")
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

        input("Press Enter to continue execution...")
        print("Inspection Complete.\n")

    @classmethod
    def attach(cls, root: AgStkObjectRoot, name: str):
        """
        Attaches to an existing STK object. Must be implemented in subclasses.

        Parameters
        ----------
        - root : AgStkObjectRoot
            The STK root object.
        - name : str
            The name of the object in STK.

        Returns
        -------
        STKObject
            An instance of the subclass attached to an existing STK object.
        """
        raise NotImplementedError(f"attach() must be implemented in subclasses of {cls.__name__}")

    def __init__(self, root, name, object_type):
        self._identity = None # No STK identity initially
        self.root = root
        self.name = name
        self.object_type = object_type

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
            AgESTKObjectType.eSensor: "Sensor",
            AgESTKObjectType.eMissile: "Missile"
        }

        return object_type_mapping.get(self.object_type, "Unknown")
    
    def _setObjectIdentity(self):
        """
        Recursively searches for the object in the entire STK object tree.
        If found, sets the object identity to the correct STK object.
        """
        def recursive_search(parent):
            """
            Recursively searches through the children of a given STK object.
            """
            for i in range(parent.Children.Count):
                child = parent.Children.Item(i)
                if child.InstanceName == self.name:
                    return child  # Found the object, return it

                # Recursively search in this child's children
                found = recursive_search(child)
                if found:
                    return found

            return None  # Not found in this branch

        try:
            # Start search from the root scenario
            self._identity = recursive_search(self.root.CurrentScenario)

        except Exception as e:
            print(f"Error during search for '{self.name}': {str(e)}")

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

    
class STKContainerObject(STKObject):
    def __init__(self, root, name, object_type):
        super().__init__(root, name, object_type)

    def addToObject(self, child: STKObject):
        """
        Adds a child object to a container.
        """
        child_name = child.name 

        try:
            # Access the container object and add the STK object using its path
            obj_to_add = self.root.GetObjectFromPath(child.getObjectPath())
            if obj_to_add:
                self._identity.Objects.AddObject(obj_to_add)
                print(f"Added '{child_name}' to container '{self.name}'.")
        except Exception as e:
            print(f"Error adding '{child_name}' to container '{self.name}': {str(e)}")

    def removeFromObject(self, child: STKObject):
        """
        Removes a child object from the container if it exists.
        """
        child_name = child.getObjectName()

        try:
            # Access the container object and remove the STK object using its path
            obj_to_remove = self.root.GetObjectFromPath(child.getObjectPath())
            if obj_to_remove:
                self._identity.Objects.RemoveObject(obj_to_remove)
                print(f"Removed '{child_name}' from container '{self.name}'.")
        except Exception as e:
            print(f"Error removing '{child_name}' from container '{self.name}': {str(e)}")


class STKStandaloneObject(STKObject):
    def __init__(self, root, name, object_type):
        super().__init__(root, name, object_type)

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