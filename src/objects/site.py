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