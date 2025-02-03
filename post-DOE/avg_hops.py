import re

# Function to calculate time-average number of hops
def calculate_time_avg_hops(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()

    total_time = 0.0
    total_hops_weighted_time = 0.0
    block = []

    for line in lines:
        # Detect the start of a new block
        if line.startswith('"HYPERION/AllLEOSat_Satellites'):
            if block:
                # Process the previous block
                chain_line = next((l for l in block if "to" in l), None)
                stats_lines = [l for l in block if re.match(r"^\d{2} \w{3} \d{4}", l)]
                
                if chain_line and stats_lines:
                    # Parse the chain
                    chain_parts = re.findall(r'LEO_P\d+_S\d+', chain_line)
                    hops = len(chain_parts) - 1  # Hops are the number of connections
                    
                    # Sum durations for this chain
                    total_duration = sum(float(line.split(',')[-1].strip()) for line in stats_lines)
                    
                    # Accumulate time and weighted time
                    total_time += total_duration
                    total_hops_weighted_time += hops * total_duration

            # Start a new block
            block = [line]
        elif line.strip():  # Add non-empty lines to the block
            block.append(line)

    # Process the last block if it exists
    if block:
        chain_line = next((l for l in block if "to" in l), None)
        stats_lines = [l for l in block if re.match(r"^\d{2} \w{3} \d{4}", l)]

        if chain_line and stats_lines:
            chain_parts = re.findall(r'LEO_P\d+_S\d+', chain_line)
            hops = len(chain_parts) - 1
            total_duration = sum(float(line.split(',')[-1].strip()) for line in stats_lines)
            total_time += total_duration
            total_hops_weighted_time += hops * total_duration

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
