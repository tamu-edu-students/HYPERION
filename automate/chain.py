from agi.stk12.stkobjects import *
from stkObject import STKContainerObject 

class Chain(STKContainerObject):
    def __init__(self, root, name, unload=True):
        super().__init__(root, name, AgESTKObjectType.eChain, unload=unload)

    def _loadObjectImplementation(self):
        # Create the chain in STK
        self.chain = self.root.CurrentScenario.Children.New(AgESTKObjectType.eChain, self.name)
        self.chain.ClearAccess()

        print(f"Chain '{self.name}' created.")

    def computeAccess(self):
        """
        Computes the access for the chain and returns the access intervals.
        """
        try:
            self.chain.ComputeAccess()
            print(f"Access computed for chain '{self.name}'.")
            
            # # Retrieve access intervals (STK stores these internally)
            # access_intervals = self.chain.DataProviders.GetDataPrvIntervalFromPath("Access Data").Exec()
            
            # # You could extract specific times if needed
            # return access_intervals
        except Exception as e:
            print(f"Error computing access for chain '{self.name}': {str(e)}")
            return

    def saveObject(self):
        """
        TODO: Might be unecessary?
        """
        return
