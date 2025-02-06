import os
import pandas as pd
import random
from geopy.geocoders import Nominatim
from agi.stk12.stkobjects import *
from datetime import datetime, timedelta
from .stkObject import STKStandaloneObject 

COLOR = 255 # Standard Red

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
    def __init__(self, root, name, launch_site=None, target_site=None, launch_time=None, Mach=None, cities_file="../data/world-cities.csv", un_countries_file="../data/UN-countries.txt", save_dir="../data/missiles/", unload=True):
        """
        Initializes a missile object with launch and target sites, launch time, and maximum Mach number.
        """
        super().__init__(root, name, AgESTKObjectType.eAircraft, unload=unload) 

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

            self.save_dir = save_dir

            if not os.path.exists(self.save_dir):
                os.makedirs(self.save_dir)
                print(f"Directory '{self.save_dir}' created successfully.")

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

        # TODO: figure out color
        # missile.Graphics.Attributes.Color = COLOR

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

    def saveObject(self):
        """
        Saves the missile's details to a text file.
        """
        file_path = f"{self.save_dir + self.name}.txt"
        with open(file_path, 'w') as file:
            file.write("Missile Object Details\n")
            file.write("======================\n")
            file.write(f"Missile Name: {self.name}\n")
            file.write(f"Launch Site:\n")
            file.write(f"  Latitude: {self.launch_site.getLat()}\n")
            file.write(f"  Longitude: {self.launch_site.getLon()}\n")

            try:
                file.write(f"  City: {self.launch_site.getCity()}\n")
            except UnicodeEncodeError:
                file.write(f"  City: Unavailable")

            file.write(f"  Country: {self.launch_site.getCountry()}\n")
            file.write(f"Target Site:\n")
            file.write(f"  Latitude: {self.target_site.getLat()}\n")
            file.write(f"  Longitude: {self.target_site.getLon()}\n")

            try:
                file.write(f"  City: {self.target_site.getCity()}\n")
            except UnicodeEncodeError:
                file.write(f"  City: Unavailable")

            file.write(f"  Country: {self.target_site.getCountry()}\n")
            file.write(f"Launch Time: {self.launch_time}\n")

            if hasattr(self, 'impact_time'):
                file.write(f"Impact Time: {self.impact_time}\n")
            else:
                file.write("Impact Time: Not determined\n")

            file.write(f"Mach Number: {self.Mach}\n")

        print(f"Missile details saved to {file_path}.")    