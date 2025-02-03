import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import curve_fit

# Data
max_hops = np.array([0, 1, 2, 3])
avg_gaps = np.array([1220.44, 677.32, 121.68, 0.0])  # in minutes

# Define an exponential decay function
def exp_func(x, a, b, c):
    return a * np.exp(-b * x) + c

# Fit the data to the exponential function
params, _ = curve_fit(exp_func, max_hops, avg_gaps, p0=[1200, 1, 0])

# Generate smooth x values for the fit line
x_fit = np.linspace(max_hops.min(), max_hops.max(), 500)
y_fit = exp_func(x_fit, *params)

# Predicted values for the original data points
y_pred = exp_func(max_hops, *params)

# Calculate R^2
ss_res = np.sum((avg_gaps - y_pred) ** 2)  # Residual sum of squares
ss_tot = np.sum((avg_gaps - np.mean(avg_gaps)) ** 2)  # Total sum of squares
r_squared = 1 - (ss_res / ss_tot)

# Plotting
plt.figure(figsize=(10, 6))
plt.scatter(max_hops, avg_gaps, color='b', label='Data Points', zorder=5)
plt.plot(x_fit, y_fit, 'r--', label='Exponential Fit')

# Display R^2 on the plot
plt.text(0.2, 0.8, f'$R^2 = {r_squared:.2f}$', transform=plt.gca().transAxes,
         fontsize=12, verticalalignment='top')

chosen_hops = 3
chosen_gap_time = avg_gaps[max_hops == chosen_hops]
plt.annotate('Chosen', xy=(chosen_hops, chosen_gap_time),
             xytext=(chosen_hops - 0.3 , chosen_gap_time + 100),
             arrowprops=dict(facecolor='black', arrowstyle='->'),
             fontsize=12)

# Labels, Title, and Legend
plt.xlabel('Maximum Number of Hops')
plt.ylabel('Overall Average Coverage Gap (min)')
plt.title('Overall Average Coverage Gaps vs. Maximum Hops (LEO to GS)')
plt.grid()

# Set x-ticks to integers only
plt.xticks(ticks=np.arange(0, 4, 1))

# Save or Show Plot
output_file_path = '../figures/avg_gaps_vs_max_hops.png'
plt.savefig(output_file_path, format='png')
print(f"Plot saved as {output_file_path}")
