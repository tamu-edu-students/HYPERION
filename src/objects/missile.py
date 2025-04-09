import os
import csv
import random
import pandas as pd
import numpy as np
import spiceypy as sp
from datetime import datetime, timedelta
from geopy.geocoders import Nominatim
from icecream import ic
from agi.stk12.stkobjects import *
from agi.stk12.utilities.colors import Colors
from scipy.integrate import solve_ivp
from scipy.optimize import minimize
from .stkObject import STKStandaloneObject 
from .site import Site
from .. import conversions

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
        print(f"Max Altitude: {self.h_max} km")

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

    def getECIState(self, step_size: int=1) -> tuple[np.ndarray, np.ndarray]:
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
    
class HypersonicMissile(Missile):
    # Constants (used internally)
    MU_E = 3.986004415e5  # km^3 / s^2
    R_E = 6.378137e3  # km
    G0 = 9.8066 # m/s^2 

    def __init__(self, root: AgStkObjectRoot, name: str, launch_site: Site, target_site: Site, launch_time: str, h_max: float, params: list[float] = None):
        """
        Initializes a hypersonic missile object using high-fidelity dynamics and a glide model.
        Booster based on the Minotaur 4-Lite launch vehicle and glider based on the HTV-2.

        Parameters
        ----------
        - root: STK root object
            The STK scenario interface used to load the object into the simulation.
        - name: str
            Name to assign to the missile object in STK.
        - launch_site: Site
            Site object specifying the launch location.
        - target_site: Site
            Site object specifying the impact location.
        - launch_time: str
            The missile launch time, formatted as `"DD MMM YYYY HH:MM:SS.SSSSSS"` (STK-compatible).
        - h_max: float
            Maximum altitude of the missile allowed, used as a constraint for optimization.
        - params: list[float], optional
            A list of parameters specifying the trajectory configuration:
                [azimuth (deg), pitch (deg), stage1_duration (s), stage2_duration (s), stage3_duration (s), glide_L_over_D].
            If None, the parameters will be automatically optimized based on target hit accuracy.
        """
        super().__init__(root, name, launch_site=launch_site, target_site=target_site, launch_time=launch_time, h_max=h_max)

        self.launch_et = sp.str2et(self.launch_time)

        # Run trajectory optimization
        if params is None:
            params = self._optimize()
        
        # Optimization params
        self.az = params[0] # deg
        self.pitch = params[1] # deg
        self.stage_durations = params[2:5] # s
        self.lambda_bar_glide = params[5]

        # Generate trajectory and ephemeris
        self.trajectory = self._propagate()
        self._makeEphemeris()

        self.Mach = self.getMach()

    def _eom(self, t, x, nom_params, control_state):
        """
        Equations of motion for the ballistic phase of a missile trajectory 
        in an inertial (Cartesian) frame.

        Parameters
        ----------
        - t: Current time in seconds (used for integration)
        - x: State vector, ordered as follows:
            - r: Inertial position vector [x, y, z] in km
            - v: Inertial velocity vector [vx, vy, vz] in km/s
            - m: Mass of the missile in kg
            - delta_T: Thrust deviation from nominal in kN
            - delta_Isp: Specific impulse deviation from nominal in seconds
            - delta_beta: Ballistic coefficient deviation from nominal in kg/km^2
            - delta_rho0: Sea-level density deviation from nominal in kg/km^3
            - delta_kp: Scale height (decay constant) deviation from nominal in km
        - nom_params: Nominal parameters:
            - T_bar: Nominal thrust in kN
            - Isp_bar: Nominal specific impulse in seconds
            - beta_bar: Nominal ballistic coefficient in kg/km^2
            - rho0_bar: Nominal sea-level atmospheric density in kg/km^3
            - kp_bar: Nominal exponential decay constant in km

        Returns
        -------
        dx : ndarray, shape (n,)
            Time derivative of the state vector.
        """
        r = x[0:3]
        v = x[3:6]
        m = x[6]
        delta_T, delta_Isp, delta_beta, delta_rho0, delta_kp, delta_lambda = x[7:]

        T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, lambda_bar = nom_params

        T = T_bar + delta_T
        Isp = Isp_bar + delta_Isp
        beta = beta_bar + delta_beta
        rho0 = rho0_bar + delta_rho0
        kp = kp_bar + delta_kp
        lambda_ = lambda_bar + delta_lambda

        r_mag = np.linalg.norm(r)
        v_mag = np.linalg.norm(v)

        h = r_mag - HypersonicMissile.R_E  # Altitude above Earth surface (km)
        rho = rho0 * np.exp(-h / kp)  # Exponential atmosphere model

        # === Forces ===
        # Thrust
        a_T = (T / m) * (v / v_mag)

        # Drag
        a_D = (-rho * v_mag / (2 * beta)) * v  # km/s^2

        # Lift
        D = a_D * m
        D_mag = np.linalg.norm(D)

        v_hat = v / v_mag
        r_hat = r / r_mag

        h = r_mag - HypersonicMissile.R_E  # altitude (km)

        # Dynamic glide control logic
        if lambda_bar > 0.0:
            Kp = 1
            Kd = 20

            dot = np.dot(v_hat, r_hat)
            dot_clamped = np.clip(dot, -1.0, 1.0)
            gamma = np.arcsin(dot_clamped)

            dt = 0.0

            if "gamma_km1" not in control_state:
                control_state["gamma_km1"] = gamma
                control_state["tkm1"] = t
                gamma_dot = 0.0
            else:
                dt = max(t - control_state["tkm1"], 1e-6)
                gamma_dot = (gamma - control_state["gamma_km1"]) / dt
                control_state["gamma_km1"] = gamma
                control_state["tkm1"] = t

            if h > 20:
                gamma_des = np.radians(+3.0)
            elif h > 2:
                gamma_des = np.radians(0.0)
            else:
                gamma_des = np.radians(-3.0)

            gamma_error = gamma - gamma_des
            lambda_dot = -Kp * gamma_error - Kd * gamma_dot

            if "lambda_cmd" not in control_state:
                control_state["lambda_cmd"] = lambda_bar

            control_state["lambda_cmd"] += lambda_dot * dt
            control_state["lambda_cmd"] = np.clip(control_state["lambda_cmd"], 0.0, lambda_)
            lambda_ = control_state["lambda_cmd"]

        # Lift in plane of velocity and local vertical, perpendicular to velocity
        lift_dir = np.cross(np.cross(v_hat, r_hat), v_hat)

        lift_dir = np.cross(np.cross(v_hat, r_hat), v_hat)
        lift_dir_norm = np.linalg.norm(lift_dir)

        if lift_dir_norm > 1e-8:
            lift_dir /= lift_dir_norm
        else:
            lift_dir = np.zeros_like(lift_dir)

        L = lambda_ * D_mag * lift_dir
        a_L = L / m

        # Gravity
        a_g = (-HypersonicMissile.MU_E / r_mag**3) * r

        # === Time derivatives ===
        dx = np.zeros_like(x)
        dx[0:3] = v
        dx[3:6] = a_T + a_D + a_L + a_g
        dx[6] = -T / (HypersonicMissile.G0 * Isp)
        dx[7:] = 0  # Deviation states are considered constant

        return dx

    def _propagate(self):
        r0 = self.launch_site.geodetic2eci(self.launch_et)

        az = np.radians(self.az) # rad

        east, north, up = self.launch_site.enu_basis(self.launch_et)

        pitch = np.radians(self.pitch) # rad

        # Compose velocity direction in ECI frame
        v_dir = (
            np.cos(pitch) * np.sin(az) * east +
            np.cos(pitch) * np.cos(az) * north +
            np.sin(pitch) * up
        )

        v0 =  v_dir / np.linalg.norm(v_dir)  # Unit vector for an initial condition (km/s)

        # r, v, m, delta_T, delta_Isp, delta_beta, delta_rho0, delta_kp, delta_lambda
        x0 = np.hstack([r0, v0, [89370, 0, 0, 0, 0, 0, 0]])

        # Constants
        beta_bar = 1.3e10     # kg/km^2
        rho0_bar = 1.46e9     # kg/km^3
        kp_bar = 6.970        # km

        trajectory = []
        t0 = 0.0 # Simulation launch time
        x = x0.copy()

        control_state = {}

        # === BOOST PHASE ===
        stages = [
            {"duration": self.stage_durations[0], "T": 209, "Isp": 259, "m": conversions.tonne2kg(48.99)},
            {"duration": self.stage_durations[1], "T": 124.7, "Isp": 309, "m": conversions.tonne2kg(27.67)},
            {"duration": self.stage_durations[2], "T": 29.48, "Isp": 300, "m": conversions.tonne2kg(7.71)}
        ] # 3 boost phases

        for stage in stages:
            T_bar = stage["T"] * HypersonicMissile.G0
            Isp_bar = stage["Isp"]
            lambda_bar = 0.0  # No lift during boost
            nom_params = [T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, lambda_bar]

            sol = solve_ivp(
                fun=lambda t, x: self._eom(t, x, nom_params, control_state),
                t_span=(t0, t0 + stage["duration"]),
                y0=x,
                max_step=1.0,
                rtol=1e-9,
                atol=1e-9
            )

            trajectory.append(sol)
            x = sol.y[:, -1]
            x[6] -= stage["m"]  # Drop stage
            t0 += stage["duration"]

        # === BALLISTIC RE_ENTRY PHASE ===
        T_bar = 0.0        # No thrust
        Isp_bar = 1e6      # Not used
        lambda_bar = 0.0   # No lift during re-entry
        nom_params = [T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, lambda_bar]
        control_state = {}

        # Event: reentry at 100 km (pierce point)
        def hit_100km(t, x):  
            r_mag = np.linalg.norm(x[0:3])
            return r_mag - (HypersonicMissile.R_E + 100.0)
        hit_100km.terminal = True
        hit_100km.direction = -1  # trigger when descending past 100 km

        sol = solve_ivp(
            fun=lambda t, x: self._eom(t, x, nom_params, control_state),
            t_span=(t0, t0 + 10000),  # upper bound
            y0=x,
            max_step=1.0,
            rtol=1e-9,
            atol=1e-9,
            events=hit_100km
        )

        trajectory.append(sol)
        x = sol.y[:, -1]
        t0 = sol.t[-1]

        # === GLIDE PHASE ===
        nom_params = [T_bar, Isp_bar, beta_bar, rho0_bar, kp_bar, self.lambda_bar_glide]
        control_state = {}
        x[12] = 0.0       # Set delta_lambda = 0

        # Event: hit the ground (impact point)
        def hit_0km(t, x): 
            r_mag = np.linalg.norm(x[0:3])
            return r_mag - HypersonicMissile.R_E
        hit_0km.terminal = True
        hit_0km.direction = -1

        sol = solve_ivp(
            fun=lambda t, x: self._eom(t, x, nom_params, control_state),
            t_span=(t0, t0 + 10000), # upper bound
            y0=x,
            max_step=1.0,
            rtol=1e-9,
            atol=1e-9,
            events=hit_0km
        )

        trajectory.append(sol)

        return trajectory
    
    ### Optimize ###
    def _objective(self, params):
        # Decision variables: launch azimuth, initial pitch angle, boost durations, L/D ratio
        self.az, self.pitch, dur1, dur2, dur3, self.lambda_bar_glide = params

        self.stage_durations = [dur1, dur2, dur3]

        # Bounds enforcement manually in case optimizer goes out of bounds
        if self.pitch <= 50 or self.pitch >= 90:
            return 1e6
        if any(d < 10 for d in [dur1, dur2, dur3]):
            return 1e6
        if self.lambda_bar_glide > 5 or self.lambda_bar_glide < 2:
            return 1e6

        try:
            traj = self._propagate()
        except:
            return 1e6

        # Altitudes
        altitudes = np.hstack([
            np.linalg.norm(seg.y[0:3], axis=0) - HypersonicMissile.R_E
            for seg in traj
        ])
        if np.any(altitudes > self.h_max):
            return 1e6 + np.max(altitudes - self.h_max)

        # Final position
        r_final = traj[-1].y[0:3, -1]
        r_target = self.target_site.geodetic2eci(self.launch_et + traj[-1].t[-1])
        dist = np.linalg.norm(np.array(r_final) - np.array(r_target))

        print(f"Final distance to target: {dist:.3f} km")

        return dist
    
    def _optimize(self):
        print("Optimizing trajectory parameters...")

        def compute_az(lat1, lon1, lat2, lon2):
            lat1 = np.radians(lat1)
            lon1 = np.radians(lon1)
            lat2 = np.radians(lat2)
            lon2 = np.radians(lon2)
            dlon = lon2 - lon1

            x = np.sin(dlon) * np.cos(lat2)
            y = np.cos(lat1) * np.sin(lat2) - np.sin(lat1) * np.cos(lat2) * np.cos(dlon)

            return np.degrees(np.arctan2(x, y))  # degrees from north
        
        az0 = compute_az(self.launch_site.lat, self.launch_site.lon, self.target_site.lat, self.target_site.lon)

        # az, pitch, stage durations, L/D
        x0 = [az0, 50, 56.4, 60.7, 72, 2.6] # Default params (actual parameters taken from Wright 2014)

        # === RUN OPTIMIZATION ===
        result = minimize(
                self._objective,
                x0,
                method="Nelder-Mead",
                options={"disp": True}
            )

        print("\n=== OPTIMIZATION COMPLETE ===")
        print("Azimuth angle (deg):", result.x[0])
        print("Pitch angle (deg):", result.x[1])
        print("Stage durations (s):", result.x[2:5])
        print("L/D ratio:", result.x[5])
        print("Distance to target (km):", result.fun)

        return result.x
    
    def _makeEphemeris(self):
        # Stitch together all time histories
        times = np.hstack([seg.t for seg in self.trajectory])
        states = np.hstack([seg.y[:6] for seg in self.trajectory])  # Only r and v

        # Write to STK ephemeris format
        with open(os.path.join(Missile.save_dir, "missile.e"), 'w') as f:
            f.write("stk.v.12.0\n")
            f.write("BEGIN Ephemeris\n")
            f.write("NumberOfEphemerisPoints {}\n".format(len(times)))
            f.write(f"ScenarioEpoch {self.launch_time}\n")
            f.write("InterpolationMethod Lagrange\n")
            f.write("InterpolationOrder 5\n")
            f.write("CentralBody Earth\n")
            f.write("CoordinateSystem Inertial\n")
            f.write("DistanceUnit Kilometers\n")
            f.write("EphemerisTimePosVel\n")

            for t, state in zip(times, states.T):
                line = f"{t:.3f} " + " ".join(f"{v:.8f}" for v in state) + "\n"
                f.write(line)

            f.write("END Ephemeris\n")

        print("Wrote missile ephemeris file to 'data/missiles/missile.e'.")


    def _loadObjectImplementation(self):
        """
        Loads the missile into STK as a missile using an external ephemeris file.
        """
        missile = self.root.CurrentScenario.Children.New(AgESTKObjectType.eMissile, self.name)
        missile.SetTrajectoryType(AgEVePropagatorType.ePropagatorStkExternal)

        missile.Graphics.Attributes.Color = COLOR

        propagator = missile.Trajectory
        eph_path = os.path.abspath(os.path.join(Missile.save_dir, "missile.e"))
        propagator.Filename = eph_path
        propagator.Propagate()

        self.impact_time = self.getImpactTime()

        print(f"Hypersonic missile '{self.name}' loaded into STK using ephemeris.")

    def getMach(self):
        # Compute max Mach from trajectory
        v_all = np.hstack([np.linalg.norm(seg.y[3:6], axis=0) for seg in self.trajectory])  # km/s
        v_max = np.max(v_all) * 3600
        Mach = v_max / 1225  # Max Mach assuming 1225 km/h speed of sound

        print(f"Max Mach Number: {Mach:.2f}")

        return Mach

    def getImpactTime(self):
        """
        Determines the impact time using the final time value from the propagated trajectory.
        """
        final_segment = self.trajectory[-1]
        impact_time_seconds = final_segment.t[-1]
        impact_time = sp.et2utc(self.launch_et + impact_time_seconds, 'ISOC', 3)

        print(f"Impact Time for '{self.name}': {impact_time}")
        return impact_time

