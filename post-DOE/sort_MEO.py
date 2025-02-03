import pandas as pd
from datetime import datetime, timedelta

# Function to normalize values
def normalize(values, min_val, max_val):
    return (values - min_val) / (max_val - min_val)

file_path = '../data/' + input("Enter file name (include extension): ")
data = pd.read_csv(file_path)

# Missile flight times (impact - launch) in seconds
missile_flight_times = {
    'Missile1': (datetime(2022, 11, 12, 19, 13, 14) + timedelta(milliseconds=458)- datetime(2022, 11, 12, 18, 1, 0)).total_seconds(),
    'Missile2': (datetime(2022, 11, 13, 6, 58, 23) + timedelta(milliseconds=415) - datetime(2022, 11, 13, 6, 0, 0)).total_seconds(),
    'Missile3': (datetime(2022, 11, 13, 16, 19, 0) + timedelta(milliseconds=165) - datetime(2022, 11, 13, 15, 0, 0)).total_seconds()
}

# Calculate tracking times
data['Missile1_Tracking'] = data['response(Model.STK.MEO.Missile1Chain.Complete_Access.Duration.Total)']
data['Missile2_Tracking'] = data['response(Model.STK.MEO.Missile2Chain.Complete_Access.Duration.Total)']
data['Missile3_Tracking'] = data['response(Model.STK.MEO.Missile3Chain.Complete_Access.Duration.Total)']

# Calculate missile visibility as percentage of flight time
data['Missile1_Visibility'] = data['Missile1_Tracking'] / missile_flight_times['Missile1']
data['Missile2_Visibility'] = data['Missile2_Tracking'] / missile_flight_times['Missile2']
data['Missile3_Visibility'] = data['Missile3_Tracking'] / missile_flight_times['Missile3']
data['Avg_Missile_Visibility'] = data[['Missile1_Visibility', 'Missile2_Visibility', 'Missile3_Visibility']].mean(axis=1)

# Convert access and revisit times from seconds to minutes
data['Avg_Access'] = data['response(Model.STK.MEO.GroundCoverage.AvgAccess.Overall_Value.Average)'] / 60
data['Avg_Revisit'] = data['response(Model.STK.MEO.GroundCoverage.AvgRevisit.Overall_Value.Average)'] / 60
data['Max_Revisit'] = data['response(Model.STK.MEO.GroundCoverage.MaxRevisit.Overall_Value.Maximum)'] / 60
data['Avg_Missile_Access'] = data['response(Model.STK.MEO.MEO2Missiles.Strand_Access.Duration.Mean)'] / 60

# Calculate altitude (h) as semi-major axis minus Earth's radius (6378 km)
data['h'] = data['design variable(Model.STK.MEO.MEOSats.Walker.Shell_MEO.SemiMajorAxis)'] - 6378
data['t'] = data['design variable(Model.STK.MEO.MEOSats.Walker.Shell_MEO.SatellitesInPlanes)'] * data['design variable(Model.STK.MEO.MEOSats.Walker.Shell_MEO.Planes)']

# Normalize each criterion
data['Avg_Access_Norm'] = normalize(data['Avg_Access'], data['Avg_Access'].min(), data['Avg_Access'].max())
data['Avg_Revisit_Norm'] = normalize(data['Avg_Revisit'], data['Avg_Revisit'].min(), data['Avg_Revisit'].max())
data['Max_Revisit_Norm'] = normalize(data['Max_Revisit'], data['Max_Revisit'].min(), data['Max_Revisit'].max())
data['Avg_Missile_Visibility_Norm'] = normalize(data['Avg_Missile_Visibility'], data['Avg_Missile_Visibility'].min(), data['Avg_Missile_Visibility'].max())
data['Avg_Missile_Access_Norm'] = normalize(data['Avg_Missile_Access'], data['Avg_Missile_Access'].min(), data['Avg_Missile_Access'].max())

# Invert scores for criteria where lower values are better
data['Avg_Revisit_Norm'] = 1 - data['Avg_Revisit_Norm']
data['Max_Revisit_Norm'] = 1 - data['Max_Revisit_Norm']

# Define weights for scoring
weights = {
    'Avg_Access_Norm': 0.3,
    'Avg_Revisit_Norm': 0.2,
    'Max_Revisit_Norm': 0.2,
    'Avg_Missile_Visibility_Norm': 0.2,
    'Avg_Missile_Access_Norm': 0.1
}



# Calculate final normalized score
data['Normalized_Score'] = (
    data['Avg_Access_Norm'] * weights['Avg_Access_Norm'] +
    data['Avg_Revisit_Norm'] * weights['Avg_Revisit_Norm'] +
    data['Max_Revisit_Norm'] * weights['Max_Revisit_Norm'] +
    data['Avg_Missile_Visibility_Norm'] * weights['Avg_Missile_Visibility_Norm'] +
    data['Avg_Missile_Access_Norm'] * weights['Avg_Missile_Access_Norm']
)

# Select and rename columns for output
data_output = data[[
    'design variable(Model.STK.MEO.MEOSats.Walker.Shell_MEO.Inclination)', 
    't', 
    'design variable(Model.STK.MEO.MEOSats.Walker.Shell_MEO.Planes)', 
    'design variable(Model.STK.MEO.MEOSats.Walker.Shell_MEO.InterPlanePhaseIncrement)', 
    'h', 
    'design variable(Model.STK.MEO.MEOSat.SWIR.SimpleConic.coneAngle)', 
    'Avg_Access', 'Avg_Revisit', 'Max_Revisit', 
    'Avg_Missile_Visibility', 'Avg_Missile_Access', 
    'Normalized_Score'
]]
data_output.columns = [
    'i', 't', 'p', 'f', 'h', 'eta', 
    'Avg Access (min)', 'Avg Revisit (min)', 'Max Revisit (min)', 
    'Avg Missile Visibility (%)', 'Avg Missile Access (min)', 
    'Normalized Score'
]

# Sort by Normalized Score in descending order
data_output = data_output.sort_values(by='Normalized Score', ascending=False)

# Save sorted data to a new CSV file
output_file_path = '../data/' + file_path.split('/')[-1].replace('.csv', '_sorted.csv')
data_output.to_csv(output_file_path, index=False)

print(f"Processed data has been saved to {output_file_path}")
