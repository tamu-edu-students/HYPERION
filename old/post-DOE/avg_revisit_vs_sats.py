import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

file_path = '../data/' + input("Enter file name (include extension): ")
data = pd.read_csv(file_path)

optimal_data = data.loc[data.groupby('t')['Avg Revisit (min)'].idxmin()]

satellite_counts = optimal_data['t']
avg_revisit_times = optimal_data['Avg Revisit (min)']

plt.figure(figsize=(10, 6))
plt.scatter(satellite_counts, avg_revisit_times, color='b', label='Data Points')

z = np.polyfit(satellite_counts, avg_revisit_times, 1)  # Linear fit
p = np.poly1d(z)
plt.plot(satellite_counts, p(satellite_counts), "r--", label='Trend Line')

R = np.corrcoef(satellite_counts, avg_revisit_times)[0, 1]

plt.text(0.25, 0.8, f'R =  {R:.2f}', transform=plt.gca().transAxes,
         fontsize=12, verticalalignment='top')

chosen_sats = 30
chosen_revisit_time = avg_revisit_times[satellite_counts == chosen_sats].values[0]
plt.annotate('Chosen', xy=(chosen_sats, chosen_revisit_time),
             xytext=(chosen_sats - 1 , chosen_revisit_time + 0.6),
             arrowprops=dict(facecolor='black', arrowstyle='->'),
             fontsize=12)

plt.xlabel('Number of Satellites')
plt.ylabel('Average Revisit Time (min)')
plt.title('Optimal Average Revisit Time vs. Number of MEO Satellites')
# plt.legend()
plt.grid()

output_file_path = file_path.replace('../data', '../figures').replace('.csv', '_avg_revisit_vs_sats.png')
plt.savefig(output_file_path, format='png')

print(f"Plot saved as {output_file_path}")
