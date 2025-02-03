import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

file_path = '../data/' + input("Enter file name (include extension): ")
data = pd.read_csv(file_path)

optimal_data = data.loc[data.groupby('h')['Avg Access (min)'].idxmax()]

altitude = optimal_data['h']
avg_access_times = optimal_data['Avg Access (min)']

plt.figure(figsize=(10, 6))
plt.scatter(altitude, avg_access_times, color='b', label='Data Points')

z = np.polyfit(altitude, avg_access_times, 1)  # Linear fit
p = np.poly1d(z)
plt.plot(altitude, p(altitude), "r--", label='Trend Line')

R = np.corrcoef(altitude, avg_access_times)[0, 1]

plt.text(0.15, 0.3, f'R = {R:.2f}', transform=plt.gca().transAxes,
         fontsize=12, verticalalignment='top')

# Add arrow pointing to the chosen altitude (1000 km)
chosen_altitude = 10000
chosen_revisit_time = avg_access_times[altitude == chosen_altitude].values[0]
plt.annotate('Chosen', xy=(chosen_altitude, chosen_revisit_time),
             xytext=(chosen_altitude - 400 , chosen_revisit_time - 30),
             arrowprops=dict(facecolor='black', arrowstyle='->'),
             fontsize=12)

plt.xlabel('Altitude (km)')
plt.ylabel('Average Access Time (min)')
plt.title('Optimal Average Access Time vs. MEO Altitude')
# plt.legend()
plt.grid()

output_file_path = file_path.replace('../data', '../figures').replace('.csv', '_avg_access_vs_altitude.png')
plt.savefig(output_file_path, format='png')

print(f"Plot saved as {output_file_path}")
