import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

file_path = '../data/' + input("Enter file name (include extension): ")
data = pd.read_csv(file_path)

optimal_data = data.loc[data.groupby('h')['Avg Revisit (min)'].idxmin()]

altitudes = optimal_data['h']
avg_revisit_times = optimal_data['Avg Revisit (min)']

plt.figure(figsize=(10, 6))
plt.scatter(altitudes, avg_revisit_times, color='b', label='Data Points')

z = np.polyfit(altitudes, avg_revisit_times, 1)
p = np.poly1d(z)
plt.plot(altitudes, p(altitudes), "r--", label='Trend Line')

R = np.corrcoef(altitudes, avg_revisit_times)[0, 1]

# Add correlation coefficient to the plot
plt.text(0.25, 0.8, f'R = {R:.2f}', transform=plt.gca().transAxes,
         fontsize=12, verticalalignment='top')

# Add arrow pointing to the chosen altitude (1000 km)
chosen_altitude = 1000
chosen_revisit_time = avg_revisit_times[altitudes == chosen_altitude].values[0]
plt.annotate('Chosen', xy=(chosen_altitude, chosen_revisit_time),
             xytext=(chosen_altitude - 50 , chosen_revisit_time + 3),
             arrowprops=dict(facecolor='black', arrowstyle='->'),
             fontsize=12)

plt.xlabel('Altitude (km)')
plt.ylabel('Average Revisit Time (min)')
plt.title('Optimal Average Revisit Time vs. LEO Altitude')
# plt.legend()
plt.grid()

output_file_path = file_path.replace('../data', '../figures').replace('.csv', '_avg_revisit_vs_altitude.png')
plt.savefig(output_file_path, format='png')

print(f"Plot saved as {output_file_path}")
