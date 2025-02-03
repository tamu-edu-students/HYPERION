import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

file_path = '../data/' + input("Enter file name (include extension): ")
data = pd.read_csv(file_path)

optimal_data = data.loc[data.groupby('h')['Avg Missile Response Time (s)'].idxmin()]

altitudes = optimal_data['h']
avg_missile_response_times = optimal_data['Avg Missile Response Time (s)']

plt.figure(figsize=(10, 6))
plt.scatter(altitudes, avg_missile_response_times, color='b', label='Data Points')

# z = np.polyfit(altitudes, avg_missile_response_times, 1)
# p = np.poly1d(z)
# plt.plot(altitudes, p(altitudes), "r--", label='Trend Line')

# R = np.corrcoef(altitudes, avg_missile_response_times)[0, 1]

# plt.text(0.25, 0.8, f'R = {R:.2f}', transform=plt.gca().transAxes,
#          fontsize=12, verticalalignment='top')

plt.xlabel('Altitude (km)')
plt.ylabel('Average Missile Response Time (s)')
plt.title('Optimal Average Missile Response Time vs. Altitude')
# plt.legend()
plt.grid()

output_file_path = file_path.replace('../data', '../figures').replace('.csv', '_avg_missile_response_vs_altitude.png')
plt.savefig(output_file_path, format='png')

print(f"Plot saved as {output_file_path}")
