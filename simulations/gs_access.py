from src import * 

# Constants
mu_E = 3.986004415e5  # km^3 / s^2
r_E = 6.378137e3  # km

def makeLEOConstellation(root):
    """
    Creates a Walker constellation and adds to a constellation object.
    """
    # Classical orbital elements and Walker parameters
    a = 1000 + r_E  # km
    i = 82  # deg
    omega = 0  # deg
    e = 0
    Omega_0 = 0  # deg
    M_0 = 0  # deg

    t = 30  # Total number of satellites
    p = 5  # Number of planes
    f = 3  # Phasing factor
    delta_M = (f * 360) / t  # Change in mean anomaly for equivalent satellites

    sats_per_plane = int(t / p)
    constellation_name = f"LEOSats"
    constellation = Constellation(root, constellation_name)
    constellation.loadObject()

    for plane in range(p):
        for sat in range(sats_per_plane):
            Omega = ((plane / p) * 360) + Omega_0
            M = (sat / sats_per_plane) * 360 + delta_M * plane + M_0

            sat_name = f"LEOSat_P{plane+1}_S{sat+1}"
            satellite = Satellite(root, sat_name, a, i, Omega, omega, e, M)
            satellite.loadObject()

            constellation.addToObject(satellite)

    return constellation

def makeMEOConstellation(root):
    """
    Creates a Walker constellation and adds to a constellation object.
    """
    # Classical orbital elements and Walker parameters
    a = 10000 + r_E  # km
    i = 90  # deg
    omega = 0  # deg
    e = 0
    Omega_0 = 0  # deg
    M_0 = 0  # deg

    t = 21  # Total number of satellites
    p = 7  # Number of planes
    f = 3  # Phasing factor
    delta_M = (f * 360) / t  # Change in mean anomaly for equivalent satellites

    sats_per_plane = int(t / p)
    constellation_name = f"MEOSats"
    constellation = Constellation(root, constellation_name)
    constellation.loadObject()

    for plane in range(p):
        for sat in range(sats_per_plane):
            Omega = ((plane / p) * 360) + Omega_0
            M = (sat / sats_per_plane) * 360 + delta_M * plane + M_0

            sat_name = f"MEOat_P{plane+1}_S{sat+1}"
            satellite = Satellite(root, sat_name, a, i, Omega, omega, e, M)
            satellite.loadObject()

            constellation.addToObject(satellite)

    return constellation

def computeAverageAccessTime(access_dict):
    """
    Computes the average access time from a dictionary of access times.

    Parameters:
    - access_dict (dict): Dictionary where keys are satellite names and values are total access times in seconds.

    Returns:
    - float: The average access time in seconds.
    """
    if not access_dict:  # Handle empty dictionary case
        return 0.0
    
    total_time = sum(access_dict.values())  
    num_strands = len(access_dict)  

    return total_time / num_strands  


def main(root):
    facility_1 = Facility(root, "ASF")
    facility_2 = Facility(root, "NWSF")
    facility_3 = Facility(root, "NWGS")

    facility_1.loadObject()
    facility_2.loadObject()
    facility_3.loadObject()
    
    # sat_constellation = makeLEOConstellation(root) 
    sat_constellation = makeMEOConstellation(root) 

    chain_1 = Chain(root, "ASFChain")
    chain_2 = Chain(root, "NWSFChain")
    chain_3 = Chain(root, "NWGSChain")

    chain_1.loadObject()
    chain_2.loadObject()
    chain_3.loadObject()

    chain_1.addToObject(facility_1)
    chain_2.addToObject(facility_2)
    chain_3.addToObject(facility_3)

    chain_1.addToObject(sat_constellation)
    chain_2.addToObject(sat_constellation)
    chain_3.addToObject(sat_constellation)

    print("All objects are loaded.")

    chain_1_access = chain_1.computeIndividualAccess()
    chain_2_access = chain_2.computeIndividualAccess()
    chain_3_access = chain_3.computeIndividualAccess()

    print("Individual access computed.")
    
    avg_access_1 = computeAverageAccessTime(chain_1_access)
    avg_access_2 = computeAverageAccessTime(chain_2_access)
    avg_access_3 = computeAverageAccessTime(chain_3_access)

    print(f"Average daily access time to ASF: {avg_access_1/60:.2f} min")
    print(f"Average daily access time to NWSF: {avg_access_2/60:.2f} min")
    print(f"Average daily access time to NWGS: {avg_access_3/60:.2f} min")
    print(f"Average daily access to ground stations: {(avg_access_1 + avg_access_2 + avg_access_3)/60:.2f} min")

