import os
import csv
import random
import pandas as pd
import numpy as np
from datetime import datetime, timedelta
from geopy.geocoders import Nominatim
from icecream import ic
from agi.stk12.stkobjects import *
from agi.stk12.utilities.colors import Colors
from .stkObject import STKStandaloneObject 
from .site import Site

r, g, b = 255, 0, 0
COLOR = Colors.FromRGB(r, g, b)

class Missile(STKStandaloneObject):
    save_dir = "data/missiles/"
    cities_file= os.path.abspath(os.path.join("data", "world-cities.csv"))
    un_countries_file="data/UN-countries.txt"

    @classmethod
    def fromCSV(cls, root, row):
        """
        Creates a Missile object from a CSV row.
        """
        name = row["Missile Name"]
        launch_site = Site(float(row["Launch Latitude"]), float(row["Launch Longitude"]), row["Launch City"], row["Launch Country"])
        target_site = Site(float(row["Target Latitude"]), float(row["Target Longitude"]), row["Target City"], row["Target Country"])
        launch_time = row["Launch Time"]
        Mach = float(row["Mach Number"])
        
        return cls(root, name, launch_site=launch_site, target_site=target_site, launch_time=launch_time, Mach=Mach)

    def __init__(self, root, name, launch_site=None, target_site=None, launch_time=None, Mach=None, unload=True):
        """
        Initializes a missile object with launch and target sites, launch time, and maximum Mach number.

        Parameters
        ----------
        root : agi.stk12.stkobjects.AgStkObjectRoot
            The STK scenario root object, required for adding the missile to STK.

        name : str
            The name of the missile object, which will be used as its identifier in STK.

        launch_site : Site, optional
            A `Site` object representing the missile's launch location.
            - Expected attributes:
                - lat (float): Latitude in decimal degrees (-90 to 90).
                - lon (float): Longitude in decimal degrees (-180 to 180).
                - city (str): Name of the city where the launch occurs.
                - country (str): Country name of the launch location.
            - If `None`, a random launch site will be selected.

        target_site : Site, optional
            A `Site` object representing the missile's target location.
            - Expected attributes (same as `launch_site`):
                - lat (float): Latitude in decimal degrees.
                - lon (float): Longitude in decimal degrees.
                - city (str): Name of the target city.
                - country (str): Country name of the target location.
            - If `None`, a random target site will be selected, ensuring it is in a different country than the launch site.

        launch_time : str, optional
            The time of missile launch in STK-compatible datetime format: `"DD MMM YYYY HH:MM:SS.SSSSSS"`.
            Example: `"01 Jan 2025 00:00:00.000000"`.
            - If `None`, a random launch time will be selected within the scenario's time window.

        Mach : float, optional
            The maximum speed of the missile in Mach number.
            - If `None`, a random Mach number will be generated in the range [5.0, 15.0].

        unload : bool, default=True
            Specifies whether the missile object should be automatically unloaded and recreated in STK upon initialization.
            - `True`: Ensures a fresh missile instance is created in STK.
            - `False`: Uses an existing missile object if available.

        Raises
        -------
        RuntimeError
            If a valid launch or target site cannot be determined after multiple retries.

        Example Usage
        --------------
        ```python
        root = stkRoot  # Assuming STK root object is initialized
        launch = Site(22.3, 114.2, "Lam Tin", "Hong Kong")
        target = Site(9.02, 13.18, "Tchéboa", "Cameroon")
        
        missile = Missile(root, "Missile1", launch_site=launch, target_site=target, launch_time="01 Jan 2025 00:00:00.000000", Mach=10.0)
        missile.loadObject()  # Add missile to STK scenario
        ```
        """
        Missile._ensureSaveDir()

        super().__init__(root, name, AgESTKObjectType.eAircraft, unload=unload) 

        if unload:
            # Load the cities dataset
            self.cities = pd.read_csv(self.cities_file)

            # Load the UN countries dataset
            with open(Missile.un_countries_file, 'r') as f:
                self.un_countries = {line.strip() for line in f}

            self.geolocator = Nominatim(user_agent="missile_simulator", timeout=2)

            # Set or generate launch site
            if launch_site is None:
                self.launch_site = self.getRandomCity(exclude_un=True)
                print(f"Random Launch Site: {self.launch_site.getCity()}, {self.launch_site.getCountry()}")
            else:
                self.launch_site = launch_site

            # Set or generate target site in a different country
            if target_site is None:
                self.target_site = self.getRandomCity(exclude_country=self.getLaunchCountry(), only_un=True)
                print(f"Random Target Site: {self.target_site.getCity()}, {self.target_site.getCountry()}")
            else:
                self.target_site = target_site

            # Set or generate launch time within scenario time window
            scenario = self.root.CurrentScenario
            scenario_start = datetime.strptime(scenario.StartTime, "%d %b %Y %H:%M:%S.%f")
            scenario_end = datetime.strptime(scenario.StopTime, "%d %b %Y %H:%M:%S.%f")
            time_window = scenario_end - scenario_start - timedelta(hours=2)

            self.launch_time = launch_time if launch_time else (scenario_start + timedelta(seconds=random.randint(0, int(time_window.total_seconds())))).strftime("%d %b %Y %H:%M:%S.%f")
            print(f"Missile Launch Time: {self.launch_time}")

            # Set or generate Mach number
            self.Mach = Mach if Mach else round(random.uniform(5, 15), 2)
            print(f"Mach Number: {self.Mach}")

        else:
            self.launch_time = self.getLaunchTime()
            self.impact_time = self.getImpactTime()

    def _loadObjectImplementation(self):
        """
        Adds the missile as an aircraft object to the STK scenario.
        """
        # Create missile object as an aircraft
        missile = self.root.CurrentScenario.Children.New(AgESTKObjectType.eAircraft, self.name)

        # Set route to use the Great Arc propagator
        missile.SetRouteType(AgEVePropagatorType.ePropagatorGreatArc)
        route = missile.Route

        # Set route computation method and altitude reference
        route.Method = AgEVeWayPtCompMethod.eDetermineTimeAccFromVel  
        route.SetAltitudeRefType(AgEVeAltitudeRef.eWayPtAltRefMSL)  
        route.EphemerisInterval.SetExplicitInterval(self.launch_time, self.launch_time)

        # Set speed
        speed_kmh = self.Mach * 1225  # km/h
        speed_kmps = speed_kmh / 3600  # km/s

        # Launch site
        waypoint1 = route.Waypoints.Add()
        waypoint1.Latitude = self.launch_site.lat
        waypoint1.Longitude = self.launch_site.lon
        waypoint1.Altitude = 0  
        waypoint1.Speed = speed_kmps  

        # Target site
        waypoint2 = route.Waypoints.Add()
        waypoint2.Latitude = self.target_site.lat
        waypoint2.Longitude = self.target_site.lon
        waypoint2.Altitude = 0  
        waypoint2.Speed = speed_kmps

        missile.Graphics.Attributes.Color = COLOR

        # Propagate the route
        route.Propagate()

        self.getImpactTime()

        print(f"Missile {self.name} added to STK.")

    def getRandomCity(self, exclude_country=None, exclude_un=False, only_un=False, max_retries=5):
        """
        Selects a random city from the loaded cities dataset and geocodes it to get coordinates.
        Handles errors by retrying up to max_retries.
        """
        retries = 0
        while retries < max_retries:
            try:
                # Randomly sample a city
                city = self.cities.sample().iloc[0]
                country = city['country']

                # Check if we need to exclude UN or non-UN countries
                if exclude_un and country in self.un_countries:
                    continue
                if only_un and country not in self.un_countries:
                    continue

                # Skip if the city is in the excluded country
                if exclude_country is not None and country == exclude_country:
                    continue

                # Attempt to geocode the city
                city_name = city['name']
                location = self.geolocator.geocode(city_name)

                # If geolocation is successful, return the site
                if location:
                    return Site(location.latitude, location.longitude, city_name, country)

                print(f"Failed to geolocate city '{city_name}'. Retrying...")

            except Exception as e:
                print(f"Geocoding error for city '{city_name}': {str(e)}. Retrying...")

            retries += 1

        raise RuntimeError("Failed to geolocate a valid city after multiple retries.")

    def getLaunchCountry(self):
        """
        Returns the country of the launch site.
        """
        return self.launch_site.country
    
    def getLaunchTime(self):
        """
        Determines the launch time by retrieving the first waypoint time from the missile's propagated route.
        """
        # Access the missile object in STK
        missile = self.root.CurrentScenario.Children.Item(self.name)
        route = missile.Route

        # Get the time of the last waypoint 
        first_waypoint = route.Waypoints.Item(0)
        self.launch_time = first_waypoint.Time 
        print(f"Impact Time for {self.name}: {self.launch_time}")
    
    def getImpactTime(self):
        """
        Determines the impact time by retrieving the final waypoint time from the missile's propagated route.
        """
        # Access the missile object in STK
        missile = self.root.CurrentScenario.Children.Item(self.name)
        route = missile.Route

        # Get the time of the last waypoint 
        final_waypoint = route.Waypoints.Item(route.Waypoints.Count - 1)
        self.impact_time = final_waypoint.Time 
        print(f"Impact Time for {self.name}: {self.impact_time}")

    @staticmethod
    def makeHeaders(filename):

        # Define file paths
        file_path_txt = os.path.join(Missile.save_dir, f"{filename}.txt")
        file_path_csv = os.path.join(Missile.save_dir, f"{filename}.csv")

        # Ensure the directory exists
        os.makedirs(Missile.save_dir, exist_ok=True)

        # ---------------- TXT FILE HEADER ----------------
        with open(file_path_txt, 'w', encoding="utf-8") as file:
            file.write("Missile Object Details\n")
            file.write("======================\n")

        # ---------------- CSV FILE HEADER ----------------
        with open(file_path_csv, 'w', newline='', encoding="utf-8") as file:
            writer = csv.writer(file)

            writer.writerow(["Missile Name", "Launch Latitude", "Launch Longitude", "Launch City", "Launch Country",
                                "Target Latitude", "Target Longitude", "Target City", "Target Country",
                                "Launch Time", "Impact Time", "Mach Number"])

        print(f"Headers created for {file_path_txt} and {file_path_csv}.")

    def saveObject(self, file_name):
        """
        Appends the missile's details to existing text and CSV files.

        Parameters
        ----------
        - file_name (str): Custom filename (without extension).
        
        Raises
        -------
        - FileNotFoundError: If the target file does not exist.
        """

        file_path_txt = os.path.join(self.save_dir, f"{file_name}.txt")
        file_path_csv = os.path.join(self.save_dir, f"{file_name}.csv")

        # Check if files exist before attempting to write
        if not os.path.exists(file_path_txt) or not os.path.exists(file_path_csv):
            raise FileNotFoundError(f"Error: One or both files do not exist. Ensure headers are created before appending data.\n"
                                    f"Missing: {'TXT' if not os.path.exists(file_path_txt) else ''} "
                                    f"{'CSV' if not os.path.exists(file_path_csv) else ''}")

        # ---------------- TXT FILE HANDLING ----------------
        with open(file_path_txt, 'a', encoding="utf-8") as file:
            file.write(f"Missile Name: {self.name}\n")
            file.write(f"Launch Site:\n")
            file.write(f"  Latitude: {self.launch_site.getLat()}\n")
            file.write(f"  Longitude: {self.launch_site.getLon()}\n")

            try:
                file.write(f"  City: {self.launch_site.getCity()}\n")
            except UnicodeEncodeError:
                file.write("  City: Unavailable\n")

            file.write(f"  Country: {self.launch_site.getCountry()}\n")
            file.write(f"Target Site:\n")
            file.write(f"  Latitude: {self.target_site.getLat()}\n")
            file.write(f"  Longitude: {self.target_site.getLon()}\n")

            try:
                file.write(f"  City: {self.target_site.getCity()}\n")
            except UnicodeEncodeError:
                file.write("  City: Unavailable\n")

            file.write(f"  Country: {self.target_site.getCountry()}\n")
            file.write(f"Launch Time: {self.launch_time}\n")

            if hasattr(self, 'impact_time'):
                file.write(f"Impact Time: {self.impact_time}\n")
            else:
                file.write("Impact Time: Not determined\n")

            file.write(f"Mach Number: {self.Mach}\n")
            file.write("\n")  # Add spacing for readability

        print(f"Missile details appended to {file_path_txt}.")

        # ---------------- CSV FILE HANDLING ----------------
        with open(file_path_csv, 'a', newline='', encoding="utf-8") as file:
            writer = csv.writer(file)

            # Prepare row data
            try:
                launch_city = self.launch_site.getCity()
            except UnicodeEncodeError:
                launch_city = "Unavailable"

            try:
                target_city = self.target_site.getCity()
            except UnicodeEncodeError:
                target_city = "Unavailable"

            impact_time = self.impact_time if hasattr(self, 'impact_time') else "Not determined"

            writer.writerow([self.name, 
                            self.launch_site.getLat(), self.launch_site.getLon(), launch_city, self.launch_site.getCountry(),
                            self.target_site.getLat(), self.target_site.getLon(), target_city, self.target_site.getCountry(),
                            self.launch_time, impact_time, self.Mach])

        print(f"Missile details appended to {file_path_csv}.")

    def getECFState(self, step_size=1):
        """
        Extracts ECF position and velocity for the missile at a given time step.
        """

        try:
            self.root.UnitPreferences.Item("DateFormat").SetCurrentUnit("EpSec")

            # Access the data providers
            dp_val_position = ic(self._identity.DataProviders.GetItemByName("Cartesian Position"))
            object_dp_position = ic(dp_val_position.Group.GetItemByName("Fixed"))
            
            dp_val_velocity = self._identity.DataProviders.GetItemByName("Cartesian Velocity")
            object_dp_velocity = dp_val_velocity.Group.GetItemByName("Fixed")
            

            # Execute the query
            position = object_dp_position.Exec(self.root.CurrentScenario.StartTime, self.root.CurrentScenario.StopTime, step_size) # km
            velocity = object_dp_velocity.Exec(self.root.CurrentScenario.StartTime, self.root.CurrentScenario.StopTime, step_size) # km/s

            # Times
            times = np.array(position.DataSets.GetDataSetByName("Time").GetValues(), dtype=float)
            times -= times[0]
            
            # State
            x = np.array(position.DataSets.GetDataSetByName("x").GetValues(), dtype=float)
            y = np.array(position.DataSets.GetDataSetByName("y").GetValues(), dtype=float)
            z = np.array(position.DataSets.GetDataSetByName("z").GetValues(), dtype=float)
            
            x_dot = np.array(velocity.DataSets.GetDataSetByName("x").GetValues(), dtype=float)
            y_dot = np.array(velocity.DataSets.GetDataSetByName("y").GetValues(), dtype=float)
            z_dot = np.array(velocity.DataSets.GetDataSetByName("z").GetValues(), dtype=float)

            states = np.column_stack((x, y, z, x_dot, y_dot, z_dot))

        finally:
            # Switch back to UTCG
            self.root.UnitPreferences.Item("DateFormat").SetCurrentUnit("UTCG")

        return times, states