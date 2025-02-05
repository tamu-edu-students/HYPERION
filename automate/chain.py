from agi.stk12.stkobjects import *
from stkObject import STKObjectBase 

class Chain(STKObjectBase):
    def __init__(self, root, name):
        super().__init__(root, name, AgESTKObjectType.eChain)

    def loadObject(self):
        # Create the chain in STK
        self.chain = self.root.CurrentScenario.Children.New(AgESTKObjectType.eChain, self.name)
        self.chain.ClearAccess()

        print(f"Chain '{self.name}' created.")

    def addToObject(self, obj_path):
        """
        Adds an object by STK path to the chain.
        """
        obj_name = obj_path.rsplit('/', 1)[-1]

        self.chain.Objects.Add(obj_path)
        print(f"Added '{obj_name}' to chain '{self.name}'.")
        
        # TODO: Fix for attached objects
        # try:
        #     # Access the chain object and add the STK object
        #     obj_to_add = self.root.CurrentScenario.Children.GetItemByName(obj_name)
        #     if obj_to_add:
        #         self.chain.Objects.Add(obj_path)
        #         print(f"Added '{obj_name}' to chain '{self.name}'.")
        # except Exception as e:
        #     print(f"Error adding '{obj_name}' to chain '{self.name}': {str(e)}")

    def computeAccess(self):
        """
        Computes the access for the chain and returns the access intervals.
        """
        try:
            self.chain.ComputeAccess()
            print(f"Access computed for chain '{self.name}'.")
            
            # Retrieve access intervals (STK stores these internally)
            access_intervals = self.chain.DataProviders.GetDataPrvIntervalFromPath("Access Data").Exec()
            
            # You could extract specific times if needed
            return access_intervals
        except Exception as e:
            print(f"Error computing access for chain '{self.name}': {str(e)}")
            return None

    def saveObject(self):
        """
        TODO: Might be unecessary?
        """
        return
