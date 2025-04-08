import numpy as np
import spiceypy as sp
from icecream import ic 

class Site:
    """
    Represents a geographical site with latitude, longitude, altitude, city, and country information.

    Attributes:
        lat (float): The latitude of the site in decimal degrees (positive for North, negative for South).
        lon (float): The longitude of the site in decimal degrees (positive for East, negative for West).
        city (str): The name of the city where the site is located.
        country (str): The name of the country where the site is located.
        h (float): The altitude above reference spheroid (km).
    """

    def __init__(self, lat: float, lon: float, city: str, country: str, h: float = 0.0):
        """
        Initializes a Site instance.

        Parameters
        ----------
        - lat: Latitude in decimal degrees (North is positive).
        - lon: Longitude in decimal degrees (East is positive).
        - city: The city where the site is located.
        - country: The country where the site is located.
        - h (optional): Altitude above reference spheroid (km).
        """
        self.lat = lat
        self.lon = lon
        self.h = h
        self.city = city
        self.country = country

    def geodetic2eci(self, et: float) -> np.ndarray:
        """
        Convert geodetic coordinates (lat, lon, h) to ECI position vector at a given time.

        Parameters
        ----------
        - et: The number of seconds past the J2000 epoch

        Returns
        -------
        - r_eci: 3-element position vector in ECI frame (km).
        """
        # Get Earth's radii and compute flattening
        radii = sp.bodvrd('EARTH', 'RADII', 3)[1]
        re = radii[0]
        f = (radii[0] - radii[2]) / radii[0]

        # Compute ECEF position from geodetic lat/lon/h
        ecef = sp.georec(np.deg2rad(self.lon), np.deg2rad(self.lat), self.h, re, f)

        # Transform to ECI frame using pxform
        R = sp.pxform('ITRF93', 'J2000', et)
        r_eci = R @ ecef

        return r_eci
    
    def enu_basis(self, et: float) -> tuple[np.ndarray, np.ndarray, np.ndarray]:
        """
        Compute the East-North-Up (ENU) basis vectors at the site in the ECI frame.

        Parameters
        ----------
        - et: Ephemeris time (seconds past J2000)

        Returns
        -------
        - (east, north, up): 3 unit vectors in ECI frame
        """
        lat_rad = np.deg2rad(self.lat)
        lon_rad = np.deg2rad(self.lon)

        # ECEF basis vectors
        up_ecef = np.array([
            np.cos(lat_rad) * np.cos(lon_rad),
            np.cos(lat_rad) * np.sin(lon_rad),
            np.sin(lat_rad)
        ])

        east_ecef = np.array([
            -np.sin(lon_rad),
            np.cos(lon_rad),
            0.0
        ])

        north_ecef = np.cross(up_ecef, east_ecef)

        # Rotate ECEF basis vectors into ECI
        R = sp.pxform('ITRF93', 'J2000', et)
        east_eci = R @ east_ecef
        north_eci = R @ north_ecef
        up_eci = R @ up_ecef

        return east_eci, north_eci, up_eci

