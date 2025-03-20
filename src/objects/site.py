class Site:
    """
    Represents a geographical site with latitude, longitude, city, and country information.

    Attributes:
        lat (float): The latitude of the site in decimal degrees (positive for North, negative for South).
        lon (float): The longitude of the site in decimal degrees (positive for East, negative for West).
        city (str): The name of the city where the site is located.
        country (str): The name of the country where the site is located.
    """

    def __init__(self, lat: float, lon: float, city: str, country: str):
        """
        Initializes a Site instance.

        Args:
            lat (float): Latitude in decimal degrees (North is positive).
            lon (float): Longitude in decimal degrees (East is positive).
            city (str): The city where the site is located.
            country (str): The country where the site is located.
        """
        self.lat = lat
        self.lon = lon
        self.city = city
        self.country = country