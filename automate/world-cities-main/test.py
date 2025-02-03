import requests
import zipfile
from io import BytesIO

# Download and extract directly in memory
url = "http://download.geonames.org/export/dump/cities15000.zip"
response = requests.get(url)

# Load ZIP file content
with zipfile.ZipFile(BytesIO(response.content)) as z:
    # List available files in the ZIP archive to verify the correct file is being accessed
    print("Files in zip:", z.namelist())
    
    # Read the file content directly from the ZIP
    with z.open("cities15000.txt") as f:
        # Decode it manually while ignoring problematic characters
        lines = f.read().decode('utf-8', errors='ignore').splitlines()

print(f"Successfully read {len(lines)} lines.")
