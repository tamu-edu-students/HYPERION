from agi.stk12.stkobjects import *
from agi.stk12.stkutil import *
from agi.stk12.utilities.colors import Colors
from .stkObject import STKStandaloneObject
from .site import Site

r, g, b = 255, 255, 0
COLOR = Colors.FromRGB(r, g, b)

class Facility(STKStandaloneObject):
    save_dir = "data/facilities/"

    def __init__(self, root, name, site=None, unload=True):
        Facility._ensureSaveDir()

        super().__init__(root, name, AgESTKObjectType.eFacility, unload=unload)

        if unload: 
            self.name = name 

            if name == "ASF": # Alaska Satellite Facility
                self.site = Site(64.794, -147.536, "Fairbanks", "United States")

            elif name == "NWSF": # NASA White Sands Facility 
                self.site = Site(32.507, -106.611, "Las Cruces", "United States")  
            elif name == "NWGS": # NASA Wallops Ground Station     
                self.site = Site(37.9333, -75.46778, "Wallops Island", "United States")
            else: 
                if site is None:
                    raise RuntimeError("If not using a default site, a site object must be provided.")
                else:
                    self.site = site
    
    def _loadObjectImplementation(self): 
        """
        Adds the facility object to the STK scenario.
        """
        facility = self.root.CurrentScenario.Children.New(AgESTKObjectType.eFacility, self.name) 

        facility.UseTerrain = True
        facility.Position.AssignGeodetic(self.site.getLat(), self.site.getLon(), 0)  # Latitude, Longitude, Altitude

        elevation = facility.AccessConstraints.AddConstraint(AgEAccessConstraints.eCstrElevationAngle)

        elevation.EnableMin = True 
        elevation.Min = 5

        facility.Graphics.Color = COLOR

        print(f"Facility {self.name} added to STK.")