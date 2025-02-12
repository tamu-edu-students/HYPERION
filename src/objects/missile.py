import os
import csv
import pandas as pd
import random
from geopy.geocoders import Nominatim
from agi.stk12.stkobjects import *
from agi.stk12.utilities.colors import Colors
from datetime import datetime, timedelta
from .stkObject import STKStandaloneObject 

r, g, b = 255, 0, 0
COLOR = Colors.FromRGB(r, g, b)

class Site:
    def __init__(self, lat, lon, city, country):
        self.lat = lat
        self.lon = lon
        self.city = city
        self.country = country

    def getLat(self):
        return self.lat
    
    def getLon(self):
        return self.lon
    
    def getCity(self):
        return self.city
    
    def getCountry(self):
        return self.country

class Missile(STKStandaloneObject):
    def __init__(self, root, name, launch_site=None, target_site=None, launch_time=None, Mach=None, cities_file="data/world-cities.csv", un_countries_file="data/UN-countries.txt", save_dir="data/missiles/", unload=True):
        """
        Initializes a missile object with launch and target sites, launch time, and maximum Mach number.
        """
        super().__init__(root, name, AgESTKObjectType.eAircraft, save_dir, unload=unload) 

        if unload:
            # Load the cities dataset
            self.cities = pd.read_csv(cities_file)

            # Load the UN countries dataset
            with open(un_countries_file, 'r') as f:
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
    
    def getImpactTime(self):
        """
        Determines the impact time by retrieving the final waypoint time from the missile's propagated route.
        """
        # Access the missile object in STK
        missile = self.root.CurrentScenario.Children.Item(self.name)
        route = missile.Route

        # Get the time of the last waypoint (impact time)
        final_waypoint = route.Waypoints.Item(route.Waypoints.Count - 1)
        self.impact_time = final_waypoint.Time 
        print(f"Impact Time for {self.name}: {self.impact_time}")

    def saveObject(self, file_name):
        """
        Appends the missile's details to existing text and CSV files.

        Parameters:
        - file_name (str): Custom filename (without extension).
        
        Raises:
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