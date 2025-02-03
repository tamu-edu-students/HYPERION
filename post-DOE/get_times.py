from datetime import datetime, timezone

# Example Unix timestamps
timestamps = [1668276060.004, 1668319200.006, 1668351600.004, 1668276060.005,1668319203.419,1668351600.004]

# Convert to human-readable date and time with milliseconds
for ts in timestamps:
    print(datetime.fromtimestamp(ts, tz=timezone.utc).strftime('%Y-%m-%d %H:%M:%S.%f %Z')[:-3])
