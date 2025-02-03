import csv
import os
import requests
import pycountry
import pandas as pd
from io import BytesIO
from zipfile import ZipFile

# Column headers for the extracted file
header = [
    'geonameid', 'name', 'asciiname', 'alternatenames', 'latitude', 'longitude', 
    'feature class', 'feature code', 'country code', 'cc2', 'admin1 code', 
    'admin2 code', 'admin3 code', 'admin4 code', 'population', 
    'elevation', 'dem', 'timezone', 'modification date'
]

asciiCodesURL = 'http://download.geonames.org/export/dump/admin1CodesASCII.txt'

def get_country_ascii_name(alpha_2_code):
    try:
        country = pycountry.countries.get(alpha_2=alpha_2_code)
        return country.name if country else f"No country found for: {alpha_2_code}"
    except Exception as e:
        return str(e)

def map_subcountry(row, df):
    match = df[(df['subcode'] == row['subcode']) & (df['code'] == row['subcountry'])]
    return match['asciiname'].values[0] if not match.empty else pd.NA

def process():
    # Download and extract the zip file
    url = "http://download.geonames.org/export/dump/cities15000.zip"
    response = requests.get(url)
    zipfile = ZipFile(BytesIO(response.content))

    # Extract the file to current working directory
    extracted_file = zipfile.extract("cities15000.txt", path=".")

    # Read and write to CSV with proper encoding and delimiter handling
    with open(extracted_file, "r", encoding="utf-8", errors="ignore") as f:
        lines = f.readlines()

    # Write the extracted data to CSV
    with open("cities15000.csv", "w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f, delimiter=",")
        writer.writerow(header)
        for line in lines:
            writer.writerow(line.strip().split('\t'))

    # Create and populate the world-cities.csv file
    world_cities_headers = ['name', 'country', 'subcountry', 'geonameid', 'subcode']
    with open('data/world-cities.csv', 'w', newline="", encoding="utf-8") as outcsv:
        writer = csv.writer(outcsv)
        writer.writerow(world_cities_headers)
        for line in lines:
            data = line.strip().split('\t')
            country = get_country_ascii_name(data[8])
            writer.writerow([data[1], country, data[10], data[0], data[10]])

    # Read and clean the admin1CodesASCII.txt data
    admin_headers = ['code', 'name', 'asciiname', 'geonameid']
    df = pd.read_csv(asciiCodesURL, header=None, delimiter="\t", names=admin_headers)
    df['subcode'] = df['code'].str[3:]
    df['code'] = df['code'].str[:2]

    # Load world-cities.csv into a DataFrame and map subcountries
    world_cities = pd.read_csv('data/world-cities.csv')
    world_cities['subcountry'] = world_cities.apply(map_subcountry, axis=1, args=(df,))
    world_cities.drop('subcode', axis=1, inplace=True)

    # Save the updated world-cities.csv
    world_cities.to_csv('data/world-cities.csv', index=False)

    # Cleanup temporary files
    os.remove("cities15000.txt")
    os.remove("cities15000.csv")

if __name__ == '__main__':
    process()
