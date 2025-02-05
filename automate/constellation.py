from agi.stk12.stkobjects import *
from stkObject import STKObjectBase 

class Constellation(STKObjectBase):
    def __init__(self, root, name):
        super().__init__(root, name, AgESTKObjectType.eConstellation)

    def loadObject(self):
        """
        Create the constellation in STK.
        """
        self.constellation = self.root.CurrentScenario.Children.New(AgESTKObjectType.eConstellation, self.name)

        print(f"Constellation '{self.name}' created.")

    def addToObject(self, obj_path):
        """
        Adds an object by STK path to the constellation.
        """
        obj_name = obj_path.rsplit('/', 1)[-1]

        try:
            # Access the chain object and add the STK object
            obj_to_add = self.root.CurrentScenario.Children.GetItemByName(obj_name)
            if obj_to_add:
                self.constellation.Objects.Add(obj_path)
                print(f"Added '{obj_name}' to constellation '{self.name}'.")
        except Exception as e:
            print(f"Error adding '{obj_name}' to constellation '{self.name}': {str(e)}")

    def saveObject(self):
        """
        TODO: Might be unecessary?
        """
        return