from datetime import datetime

def parse_time_to_seconds(time_str):
    dt = datetime.strptime(time_str, "%d %b %Y %H:%M:%S.%f")
    if dt.day == 10:
        return (dt.hour - 18) * 3600 + dt.minute * 60 + dt.second + dt.microsecond / 1_000_000
    else:
        return (dt.hour + 6) * 3600 + dt.minute * 60 + dt.second + dt.microsecond / 1_000_000

def merge_intervals(intervals):
    merged = []
    for start, stop in sorted(intervals):
        if merged and start <= merged[-1][1]:
            merged[-1] = (merged[-1][0], max(merged[-1][1], stop))
        else:
            merged.append((start, stop))
    return merged

def calculate_coverage_gaps(file_path):
    total_day_seconds = 86400
    interval = {}
    current = None

    with open(file_path, 'r') as f:
        for line in f:
            line = line.strip()

            # Detect a new LEO satellite
            if line.startswith('"HYPERION'):
                current = line.split(" ")[1]
                if current not in interval:
                    interval[current] = []
            
            # Process interval times
            elif line and ':' in line and 'Duration' not in line:
                parts = line.split(',')
                if len(parts) >= 2:
                    start_time = parse_time_to_seconds(parts[0].strip())
                    stop_time = parse_time_to_seconds(parts[1].strip())
                    interval[current].append((start_time, stop_time))
    
    results = {}
    for sat, intervals in interval.items():
        merged_intervals = merge_intervals(intervals)
        total_gap = 0
        last_end = 0

        for start, stop in merged_intervals:
            if start > last_end:
                total_gap += start - last_end
            last_end = stop

        if last_end < total_day_seconds:
            total_gap += total_day_seconds - last_end

        results[sat] = total_gap

    return results

# Input file
file_path = '../data/' + input("Enter the file name: ")
gaps = calculate_coverage_gaps(file_path)

print("\nTotal Coverage Gaps (min):")
for sat, gap in gaps.items():
    print(f"{sat}: {gap/60:.2f} min")

print(f"Average Coverage Gaps: {sum(gaps.values()) / len(gaps) / 60:.2f} min")

