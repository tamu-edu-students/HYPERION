from agi.stk12.stkobjects import *
from .stkObject import STKContainerObject

class Constellation(STKContainerObject):
    def __init__(self, root, name):
        super().__init__(root, name, AgESTKObjectType.eConstellation)

    def _loadObjectImplementation(self):
        """
        Create the constellation in STK.
        """
        self.constellation = self.root.CurrentScenario.Children.New(AgESTKObjectType.eConstellation, self.name)

        print(f"Constellation '{self.name}' created.")

    def saveObject(self):
        """
        TODO: Might be unecessary?
        """
        return