from src import * 

def computeDailyCounts(counts_dict, days):
    """
    Computes the sum of all the access counts in a chain_counts dictionary.

    Parameters:
    - counts_dict (dict): Dictionary where keys are strand names and values are the number of accesses.
    - days (int): The number of days.

    Returns:
    - int: The total count of all accesses.
    """
    if not counts_dict:
        return 0
    
    total_counts = sum(counts_dict.values())
    
    return total_counts / days

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
     
    # sat_constellation = makeConstellation(root, "LEOSats", 1000, 82, 30, 5, 3)
    sat_constellation = makeConstellation(root, "MEOSats", 10000, 90, 21, 7, 3) 

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

    # Compute strand counts
    chain_1_counts = chain_1.getStrandCounts()
    chain_2_counts = chain_2.getStrandCounts()
    chain_3_counts = chain_3.getStrandCounts()

    print("Strand counts computed.")

    avg_counts_1 = computeDailyCounts(chain_1_counts, 7)
    avg_counts_2 = computeDailyCounts(chain_2_counts, 7)
    avg_counts_3 = computeDailyCounts(chain_3_counts, 7)

    print(f"Average daily contacts made to ASF: {int(avg_counts_1)}")
    print(f"Average daily contacts made to NWSF: {int(avg_counts_2)}")
    print(f"Average daily contacts made to NWGS: {int(avg_counts_3)}")
    print(f"Average daily contacts made to ground stations: {int(avg_counts_1 + avg_counts_2 + avg_counts_3)}")

    # Compute access times
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
