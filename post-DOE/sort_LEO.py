import pandas as pd
from datetime import datetime

# Function to normalize values
def normalize(values, min_val, max_val):
    return (values - min_val) / (max_val - min_val)

file_path = '../data/' + input("Enter file name (include extension): ")
data = pd.read_csv(file_path)

# Convert Unix timestamps to datetime format
missile_launch_times = {
    'Missile1': datetime(2022, 11, 12, 18, 1, 0),
    'Missile2': datetime(2022, 11, 13, 6, 0, 0),
    'Missile3': datetime(2022, 11, 13, 15, 0, 0)
}

# Calculate response times
data['Missile1_Response'] = (pd.to_datetime(data['response(Model.STK.LEO.Missile1Chain.Time_Instant.CompleteChainAccessStartTime.Time_Instant)'], unit='s') - missile_launch_times['Missile1']).dt.total_seconds()
data['Missile2_Response'] = (pd.to_datetime(data['response(Model.STK.LEO.Missile2Chain.Time_Instant.CompleteChainAccessStartTime.Time_Instant)'], unit='s') - missile_launch_times['Missile2']).dt.total_seconds()
data['Missile3_Response'] = (pd.to_datetime(data['response(Model.STK.LEO.Missile3Chain.Time_Instant.CompleteChainAccessStartTime.Time_Instant)'], unit='s') - missile_launch_times['Missile3']).dt.total_seconds()
data['Avg_Missile_Response'] = data[['Missile1_Response', 'Missile2_Response', 'Missile3_Response']].mean(axis=1)

data['Max_Revisit'] = data['response(Model.STK.LEO.GroundCoverage.MaxRevisit.Overall_Value.Maximum)'] / 60
data['Avg_Revisit'] = data['response(Model.STK.LEO.GroundCoverage.AvgRevisit.Overall_Value.Average)'] / 60
data['Avg_Missile_Access'] = data['response(Model.STK.LEO.LEO2Missiles.Strand_Access.Duration.Mean)'] / 60

data['h'] = data['design variable(Model.STK.LEO.LEOSats.Walker.Shell_LEO.SemiMajorAxis)'] - 6378
data['t'] = data['design variable(Model.STK.LEO.LEOSats.Walker.Shell_LEO.SatellitesInPlanes)'] * data['design variable(Model.STK.LEO.LEOSats.Walker.Shell_LEO.Planes)']

# Normalize each criterion
data['Max_Revisit_Norm'] = normalize(data['Max_Revisit'], data['Max_Revisit'].min(), data['Max_Revisit'].max())
data['Avg_Revisit_Norm'] = normalize(data['Avg_Revisit'], data['Avg_Revisit'].min(), data['Avg_Revisit'].max())
data['Avg_Missile_Response_Norm'] = normalize(data['Avg_Missile_Response'], data['Avg_Missile_Response'].min(), data['Avg_Missile_Response'].max())
data['Avg_Missile_Access_Norm'] = normalize(data['Avg_Missile_Access'], data['Avg_Missile_Access'].min(), data['Avg_Missile_Access'].max())

# Invert scores for criteria where lower values are better
data['Max_Revisit_Norm'] = 1 - data['Max_Revisit_Norm']
data['Avg_Revisit_Norm'] = 1 - data['Avg_Revisit_Norm']
data['Avg_Missile_Response_Norm'] = 1 - data['Avg_Missile_Response_Norm']

# Define weights for scoring
weights = {
    'Max_Revisit_Norm': 0.3,
    'Avg_Revisit_Norm': 0.3,
    'Avg_Missile_Response_Norm': 0.2,
    'Avg_Missile_Access_Norm': 0.2
}

# Calculate score
data['Normalized_Score'] = (
    data['Max_Revisit_Norm'] * weights['Max_Revisit_Norm'] +
    data['Avg_Revisit_Norm'] * weights['Avg_Revisit_Norm'] +
    data['Avg_Missile_Response_Norm'] * weights['Avg_Missile_Response_Norm'] +
    data['Avg_Missile_Access_Norm'] * weights['Avg_Missile_Access_Norm']
)

# Filter rows where eta < 60
# data = data[data['design variable(Model.STK.LEO.LEOSat.SWIR.SimpleConic.coneAngle)'] < 60]

# Select and rename columns for output
data_output = data[[
    'design variable(Model.STK.LEO.LEOSats.Walker.Shell_LEO.Inclination)', 
    't', 
    'design variable(Model.STK.LEO.LEOSats.Walker.Shell_LEO.Planes)', 
    'design variable(Model.STK.LEO.LEOSats.Walker.Shell_LEO.InterPlanePhaseIncrement)', 
    'h', 
    'design variable(Model.STK.LEO.LEOSat.SWIR.SimpleConic.coneAngle)', 
    'Avg_Revisit', 'Max_Revisit', 
    'Avg_Missile_Response', 'Avg_Missile_Access', 
    'Normalized_Score'
]]

data_output.columns = [
    'i', 't', 'p', 'f', 'h', 'eta', 
    'Avg Revisit (min)', 'Max Revisit (min)', 
    'Avg Missile Response Time (s)', 'Avg Missile Access (min)', 
    'Normalized Score'
]

# Sort
data_output = data_output.sort_values(by='Normalized Score', ascending=False)

output_file_path = '../data/' + file_path.split('/')[-1].replace('.csv', '_sorted.csv')
data_output.to_csv(output_file_path, index=False)

print(f"Processed data has been saved to {output_file_path}")
