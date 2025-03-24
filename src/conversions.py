import numpy as np

# Angular conversions
asc2deg = lambda z: z / 3600
asc2rad = lambda z: z * np.pi / (180 * 3600)
rad2asc = lambda z: z * 3600 * 180 / np.pi
dms2deg = lambda d, m, s: d + m / 60 + s / 3600
dms2rad = lambda d, m, s: np.deg2rad(d + m / 60 + s / 3600)

# Distance conversions
km2m = lambda z: z * 1000
m2km = lambda z: z / 1000
km2mm = lambda z: z * 1_000_000
mm2km = lambda z: z / 1_000_000

# Time conversions
hr2sec = lambda z: z * 3600
sec2hr = lambda z: z / 3600
sec2min = lambda z: z / 60
min2sec = lambda z: z * 60
min2hr = lambda z: z / 60
hr2min = lambda z: z * 60