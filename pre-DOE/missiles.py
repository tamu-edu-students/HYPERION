import math

R = 6378 # km
a = 1234.8 # km/h

def haversine(lat1, lon1, lat2, lon2):
    lat1, lon1, lat2, lon2 = map(math.radians, [lat1, lon1, lat2, lon2])

    dlat = lat2 - lat1
    dlon = lon2 - lon1

    # Haversine calculation
    a = math.sin(dlat / 2)**2 + math.cos(lat1) * math.cos(lat2) * math.sin(dlon / 2)**2
    c = 2 * math.asin(math.sqrt(a))
    distance = R * c
    return distance

# Define target Mach numbers for each missile
mach_numbers = [5, 7.5, 10]

missiles = [
    ((62.96, 40.683), (38.8977, -77.0365), mach_numbers[0]),    # Missile 1
    ((0, 160), (37.9942, -121.983), mach_numbers[1]),           # Missile 2
    ((20.0406, 110.765), (33.75, -118.067), mach_numbers[2])    # Missile 3
]

for i, (launch, target, mach) in enumerate(missiles, 1):
    distance = haversine(*launch, *target)  # km
    speed = mach * a  # km/h based on target Mach number
    time_of_flight = distance / speed * 3600  # convert hours to seconds
    
    print(f"Missile {i}:")
    print(f"  Distance: {distance:.2f} km")
    print(f"  Speed: {speed/3600:.2f} km/s (Mach {mach})")
    print(f"  Required Flight Time: {time_of_flight:.2f} seconds")
    print()
