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
from typing import Tuple
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

    def __init__(self, root : AgStkObjectRoot, name: str, launch_site: Site=None, target_site: Site=None, launch_time: str=None, Mach: float=None, h_max: float=None):
        """
        Initializes a missile object with launch and target sites, launch time, and maximum Mach number.

        Parameters
        ----------
        - root: The STK scenario root object.
        - name: The name of the missile object.
        - launch_site: The missile's launch location.
            If `None`, a random launch site will be selected.      
        - target_site: The missile's impact location.
            If `None`, a random target site will be selected.
        - launch_time: The time of missile launch in STK-compatible datetime format: `"DD MMM YYYY HH:MM:SS.SSSSSS"`.
            Example: `"01 Jan 2025 00:00:00.000000"`.
            If `None`, a random launch time will be selected within the scenario's time window.
        - Mach: The maximum speed of the missile in Mach number.
            If `None`, a random Mach number will be generated in the range [5.0, 15.0].
        - h_max: The maximum altitude of the missile in km.
            If `None`, a random altitude will be generated in the range [20, 100] km
        """
        Missile._ensureSaveDir()

        super().__init__(root, name, AgESTKObjectType.eAircraft) 

        # Load the cities dataset
        self.cities = pd.read_csv(self.cities_file)

        # Load the UN countries dataset
        with open(Missile.un_countries_file, 'r') as f:
            self.un_countries = {line.strip() for line in f}

        self.geolocator = Nominatim(user_agent="missile_simulator", timeout=2)

        # Set or generate launch site
        if launch_site is None:
            self.launch_site = self.getRandomCity(exclude_un=True)
            print(f"Random Launch Site: {self.launch_site.city}, {self.launch_site.country}")
        else:
            self.launch_site = launch_site

        # Set or generate target site in a different country
        if target_site is None:
            self.target_site = self.getRandomCity(exclude_country=self.launch_site.country, only_un=True)
            print(f"Random Target Site: {self.target_site.city}, {self.target_site.country}")
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

        # Set or generate altitude
        self.h_max = h_max if h_max else round(random.uniform(20, 100), 2)
        print(f"Altitude: {self.h_max} km")

    @staticmethod
    def _interpGreatCircle(lat1, lon1, lat2, lon2, f):
        # Convert degrees to radians
        lat1, lon1, lat2, lon2 = map(np.radians, [lat1, lon1, lat2, lon2])

        delta = np.arccos(np.sin(lat1)*np.sin(lat2) + np.cos(lat1)*np.cos(lat2)*np.cos(lon2 - lon1))

        if delta == 0:
            return np.degrees(lat1), np.degrees(lon1)

        A = np.sin((1 - f) * delta) / np.sin(delta)
        B = np.sin(f * delta) / np.sin(delta)

        x = A * np.cos(lat1) * np.cos(lon1) + B * np.cos(lat2) * np.cos(lon2)
        y = A * np.cos(lat1) * np.sin(lon1) + B * np.cos(lat2) * np.sin(lon2)
        z = A * np.sin(lat1) + B * np.sin(lat2)

        lat = np.arctan2(z, np.sqrt(x**2 + y**2))
        lon = np.arctan2(y, x)

        return np.degrees(lat), np.degrees(lon)

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

        # Define number of waypoints and max altitude
        N = 1000

        for i in range(N + 1):
            f = i / N  # normalized distance

            lat, lon = self._interpGreatCircle(
                self.launch_site.lat, self.launch_site.lon,
                self.target_site.lat, self.target_site.lon,
                f
            )

            h = 4 * self.h_max * f * (1 - f)

            wp = route.Waypoints.Add()
            wp.Latitude = float(lat)
            wp.Longitude = float(lon)
            wp.Altitude = h
            wp.Speed = speed_kmps

        missile.Graphics.Attributes.Color = COLOR

        # Propagate the route
        route.Propagate()

        self.impact_time = self.getImpactTime()

        print(f"Missile '{self.name}' added to STK.")

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
    
    def getLaunchTime(self):
        """
        Determines the launch time by retrieving the first waypoint time from the missile's propagated route.
        """
        # Access the missile object in STK
        missile = self.root.CurrentScenario.Children.Item(self.name)
        route = missile.Route

        # Get the time of the last waypoint 
        first_waypoint = route.Waypoints.Item(0)
        launch_time = first_waypoint.Time 
        print(f"Launch Time for '{self.name}': {launch_time}")

        return launch_time
    
    def getImpactTime(self):
        """
        Determines the impact time by retrieving the final waypoint time from the missile's propagated route.
        """
        # Access the missile object in STK
        missile = self.root.CurrentScenario.Children.Item(self.name)
        route = missile.Route

        # Get the time of the last waypoint 
        final_waypoint = route.Waypoints.Item(route.Waypoints.Count - 1)
        impact_time = final_waypoint.Time 
        print(f"Impact Time for '{self.name}': {impact_time}")

        return impact_time

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
            file.write(f"  Latitude: {self.launch_site.lat}\n")
            file.write(f"  Longitude: {self.launch_site.lon}\n")

            try:
                file.write(f"  City: {self.launch_site.city}\n")
            except UnicodeEncodeError:
                file.write("  City: Unavailable\n")

            file.write(f"  Country: {self.launch_site.country}\n")
            file.write(f"Target Site:\n")
            file.write(f"  Latitude: {self.target_site.lat}\n")
            file.write(f"  Longitude: {self.target_site.lon}\n")

            try:
                file.write(f"  City: {self.target_site.city}\n")
            except UnicodeEncodeError:
                file.write("  City: Unavailable\n")

            file.write(f"  Country: {self.target_site.country}\n")
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
                launch_city = self.launch_site.city
            except UnicodeEncodeError:
                launch_city = "Unavailable"

            try:
                target_city = self.target_site.city
            except UnicodeEncodeError:
                target_city = "Unavailable"

            impact_time = self.impact_time if hasattr(self, 'impact_time') else "Not determined"

            writer.writerow([self.name, 
                            self.launch_site.lat, self.launch_site.lon, launch_city, self.launch_site.country,
                            self.target_site.lat, self.target_site.lon, target_city, self.target_site.country,
                            self.launch_time, impact_time, self.Mach])

        print(f"Missile details appended to {file_path_csv}.")

    def getECIState(self, step_size: int=1) -> Tuple[np.ndarray, np.ndarray]:
        """
        Extracts ECI position and velocity for the missile at a given time step.

        Parameters
        ---------
        - step_size: The time granularity for saving data in seconds (default: 1s).

        Returns
        -------
        - t_store: The timestamps of the flight path.
        - states: The ECI states through the flight path.
        """

        try:
            self.root.UnitPreferences.Item("DateFormat").SetCurrentUnit("EpSec")

            # Access the data providers
            dp_val_position = self._identity.DataProviders.GetItemByName("Cartesian Position")
            
            object_dp_position = dp_val_position.Group.GetItemByName("J2000")
            
            dp_val_velocity = self._identity.DataProviders.GetItemByName("Cartesian Velocity")
            object_dp_velocity = dp_val_velocity.Group.GetItemByName("J2000")
            
            # Execute the query
            position = object_dp_position.Exec(self.root.CurrentScenario.StartTime, self.root.CurrentScenario.StopTime, step_size) # km
            velocity = object_dp_velocity.Exec(self.root.CurrentScenario.StartTime, self.root.CurrentScenario.StopTime, step_size) # km/s

            # Times
            t_store = np.array(position.DataSets.GetDataSetByName("Time").GetValues(), dtype=float)
            
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

        return t_store, states