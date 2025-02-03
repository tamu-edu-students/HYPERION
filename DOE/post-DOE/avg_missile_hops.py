import re

# Function to calculate time-average number of hops
def calculate_time_avg_hops(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()

    total_time = 0.0
    total_hops_weighted_time = 0.0
    block = []
    
    for line in lines:
        # Detect the start of a new block when a line begins with one of the prefixes
        if line.startswith('"ASFS to') or line.startswith('"WSC to') or line.startswith('"WGS to'):
            if block:
                # Process the previous block
                chain_line = next((l for l in block if "to HYPERION" in l), None)
                stats_line = next((l for l in block if "Total Duration" in l), None)

                if chain_line and stats_line:
                    # Parse the chain
                    chain_parts = re.findall(r'LEO_P\d+_S\d+', chain_line)

                    if len(chain_parts) > 1:
                        last_hop = chain_parts[-2]
                    else:
                        last_hop = chain_parts[0]

                    sensor = re.search(r'LEO_P\d+_S\d+\.Sensor', chain_line)

                    if sensor:
                        sensor_sat = sensor.group().split('.')[0]

                        # Check constraint: last satellite matches sensor satellite
                        if last_hop == sensor_sat:
                            hops = len(chain_parts) - 2

                            # Parse the duration from stats line
                            duration = float(stats_line.split(',')[-1].strip())

                            # Accumulate time and weighted time
                            total_time += duration
                            total_hops_weighted_time += hops * duration

            # Start a new block
            block = [line]
        elif line.strip():  # Add non-empty lines to the block
            block.append(line)

    # Process the last block if it exists
    if block:
        chain_line = next((l for l in block if "to HYPERION" in l), None)
        stats_line = next((l for l in block if "Total Duration" in l), None)

        if chain_line and stats_line:
            chain_parts = re.findall(r'LEO_P\d+_S\d+', chain_line)

            if len(chain_parts) > 1:
                last_hop = chain_parts[-2]
            else:
                last_hop = chain_parts[0]

            sensor = re.search(r'LEO_P\d+_S\d+\.Sensor', chain_line)

            if sensor:
                sensor_sat = sensor.group().split('.')[0]

                if last_hop == sensor_sat:
                    hops = len(chain_parts) - 2
                    duration = float(stats_line.split(',')[-1].strip())
                    total_time += duration
                    total_hops_weighted_time += hops * duration

    # Calculate time-average hops
    if total_time > 0:
        time_avg_hops = total_hops_weighted_time / total_time
    else:
        time_avg_hops = 0.0

    return time_avg_hops

# Input file path
file_path = '../data/' + input("Enter the file name: ")
time_avg_hops = calculate_time_avg_hops(file_path)
print(f"Time-average number of hops: {time_avg_hops:.4f}")
