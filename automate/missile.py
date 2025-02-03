import pandas as pd
import random
from geopy.geocoders import Nominatim
from agi.stk12.stkobjects import *
from datetime import datetime, timedelta

class Site:
    def __init__(self, lat, lon, country):
        self.lat = lat
        self.lon = lon
        self.country = country

    def get_lat(self):
        return self.lat
    
    def get_lon(self):
        return self.lon
    
    def get_country(self):
        return self.country

class Missile:
    def __init__(self, root, name, launch_site=None, target_site=None, launch_time=None, Mach=None, cities_file="../data/world-cities.csv"):
        """
        Initializes a missile object with launch and target sites, launch time, and maximum Mach number.
        """
        self.root = root
        self.name = name

        self.delete()

        # Load the cities dataset
        self.cities = pd.read_csv(cities_file)

        self.geolocator = Nominatim(user_agent="missile_simulator")

        # Set or generate launch site
        if launch_site is None:
            self.launch_site = self.random_city()
            print(f"Random Launch Site: {self.launch_site.get_lat(), self.launch_site.get_lon()} in {self.launch_site.get_country()}")
        else:
            self.launch_site = launch_site

        # Set or generate target site in a different country
        if target_site is None:
            self.target_site = self.random_city(exclude_country=self.launch_site_country())
            print(f"Random Target Site: {self.target_site.get_lat(), self.target_site.get_lon()} in {self.target_site.get_country()}")
        else:
            self.target_site = target_site

        # Set or generate launch time within scenario time window
        scenario = self.root.CurrentScenario
        scenario_start = datetime.strptime(scenario.StartTime, "%d %b %Y %H:%M:%S.%f")
        scenario_end = datetime.strptime(scenario.StopTime, "%d %b %Y %H:%M:%S.%f")
        time_window = scenario_end - scenario_start - timedelta(hours=2)

        self.launch_time = launch_time if launch_time else (scenario_start + timedelta(seconds=random.randint(0, int(time_window.total_seconds())))).strftime("%d %b %Y %H:%M:%S.%f")
        print(f"Missile Launch Time: {self.launch_time}")

        # Set or generate maximum Mach number
        self.Mach = Mach if Mach else round(random.uniform(2.5, 10), 2)
        print(f"Missile Maximum Mach: {self.Mach}")

    def random_city(self, exclude_country=None):
        """
        Selects a random city from the loaded cities dataset and geocodes it to get coordinates.
        Ensures the city is not in the excluded country.
        """
        while True:
            city = self.cities.sample().iloc[0]  # Randomly sample a city
            country = city['country']

            # Skip if the city is in the excluded country
            if exclude_country is None or country != exclude_country:
                city_name = city['name']
                location = self.geolocator.geocode(city_name)  # Geocode to get coordinates
                if location:
                    return Site(location.latitude, location.longitude, country)

    def launch_site_country(self):
        """
        Returns the country of the launch site.
        """
        return self.launch_site.country

    def add(self):
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

        # Propagate the route
        route.Propagate()
        print(f"Missile {self.name} added to STK.")

    def delete(self):
        """
        Checks if an object with the same name exists in STK and deletes it if found.
        """
        try:
            existing_object = self.root.CurrentScenario.Children.Item(self.name)
            if existing_object:
                print(f"Object '{self.name}' already exists. Deleting it...")
                existing_object.Unload()
                print(f"Object '{self.name}' deleted.")
        except Exception:
            print(f"No existing object named '{self.name}' found.")
            