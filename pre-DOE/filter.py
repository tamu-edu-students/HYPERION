import pandas as pd

file = input("Enter file name (include extension): ")

df = pd.read_csv(file, header=None)

filtered_df = df[(df[0] * df[1] <= 32) & (df[0] * df[1] >= 20) & (df[2] < df[0]) & (df[2] > 1)]

rows_removed = len(df) - len(filtered_df)
rows_remaining = len(filtered_df)

print(f"Total rows removed: {rows_removed}")
print(f"Total rows remaining: {rows_remaining}")

filtered_file = file.split('.')[0] + '_filtered.csv'
filtered_df.to_csv(filtered_file, index=False, header=False)