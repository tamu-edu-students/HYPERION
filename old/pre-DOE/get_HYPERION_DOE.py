import pandas as pd

leo_file_path = '../data/' + input("Enter LEO results file name (include extension): ")
meo_file_path = '../data/' + input("Enter MEO results file name (include extension): ")

leo_data = pd.read_csv(leo_file_path).sort_values(by='Normalized Score', ascending=False).head(25)
meo_data = pd.read_csv(meo_file_path).sort_values(by='Normalized Score', ascending=False).head(25)

leo_data['LEO_sats_per_plane'] = (leo_data['t'] / leo_data['p']).astype(int)
leo_data['LEO_semi_major_axis'] = leo_data['h'] + 6378  # Altitude + Earth's radius

meo_data['MEO_sats_per_plane'] = (meo_data['t'] / meo_data['p']).astype(int)
meo_data['MEO_semi_major_axis'] = meo_data['h'] + 6378  # Altitude + Earth's radius

leo_columns = ['p', 'LEO_sats_per_plane', 'f', 'LEO_semi_major_axis', 'i', 'eta', 'Normalized Score']
meo_columns = ['p', 'MEO_sats_per_plane', 'f', 'MEO_semi_major_axis', 'i', 'eta', 'Normalized Score']

top_leo = leo_data[leo_columns].reset_index(drop=True)
top_meo = meo_data[meo_columns].reset_index(drop=True)

combined_data = []
for leo_row in top_leo.itertuples(index=False):
    for meo_row in top_meo.itertuples(index=False):
        score_product = leo_row[-1] * meo_row[-1]  # Product of 'Normalized Score' for LEO and MEO

        combined_config = [
            leo_row.p, leo_row.LEO_sats_per_plane, leo_row.f, leo_row.LEO_semi_major_axis, leo_row.i, leo_row.eta,
            meo_row.p, meo_row.MEO_sats_per_plane, meo_row.f, meo_row.MEO_semi_major_axis, meo_row.i, meo_row.eta,
            score_product
        ]
        combined_data.append(combined_config)

columns = [
    'LEO_planes', 'LEO_sats_per_plane', 'LEO_phasing', 'LEO_semi_major_axis',
    'LEO_inclination', 'LEO_conic_angle',
    'MEO_planes', 'MEO_sats_per_plane', 'MEO_phasing', 'MEO_semi_major_axis',
    'MEO_inclination', 'MEO_conic_angle',
    'Score_Product'
]
combined_df = pd.DataFrame(combined_data, columns=columns)

combined_df = combined_df.sort_values(by='Score_Product', ascending=False).drop(columns=['Score_Product'])

output_file_path = '../data/HYPERION_DOE_setup.csv'
combined_df.to_csv(output_file_path, index=False, header=False)

print(f"Combined configurations have been saved to {output_file_path}")
