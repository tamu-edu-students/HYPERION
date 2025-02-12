import os
import csv

def clearScenario(scenario):
    while scenario.Children.Count > 0:
        children = scenario.Children
        print(f"Number of objects remaining: {children.Count}")

        for i in range(children.Count):
            try:
                child = children.Item(0)  # Always delete the first item to avoid skipping
                print(f"Deleting object: {child.InstanceName}")
                child.Unload()
            except Exception as e:
                print(f"Failed to delete object: {e}")
                continue  # Continue if an object fails to delete

    print("All objects have been cleared.")

def makeHeaders(file_name, obj_type):
    """
    Writes headers for both TXT and CSV files based on the object type.

    Parameters:
    - file_name (str): Name of the file (without extension).
    - obj_type (str): Type of STK object. Supported types: "Missile", "Satellite".
    """

    directories = {
        "Missile": "data/missiles",
        "Satellite": "data/satellites",
        "Facility": "data/facilities",
        "Sensor": "data/sensors",
    }

    # Ensure obj_type is valid
    if obj_type not in directories:
        raise ValueError(f"Invalid object type: {obj_type}. Supported types: {list(directories.keys())}")

    save_dir = directories[obj_type]

    # Define file paths
    file_path_txt = os.path.join(save_dir, f"{file_name}.txt")
    file_path_csv = os.path.join(save_dir, f"{file_name}.csv")

    # Ensure the directory exists
    os.makedirs(save_dir, exist_ok=True)

    # ---------------- TXT FILE HEADER ----------------
    with open(file_path_txt, 'w', encoding="utf-8") as file:
        if obj_type == "Missile":
            file.write("Missile Object Details\n")
        elif obj_type == "Satellite":
            file.write("Satellite Object Details\n")
        file.write("======================\n")

    # ---------------- CSV FILE HEADER ----------------
    with open(file_path_csv, 'w', newline='', encoding="utf-8") as file:
        writer = csv.writer(file)

        if obj_type == "Missile":
            writer.writerow(["Missile Name", "Launch Latitude", "Launch Longitude", "Launch City", "Launch Country",
                                "Target Latitude", "Target Longitude", "Target City", "Target Country",
                                "Launch Time", "Impact Time", "Mach Number"])

        elif obj_type == "Satellite":
            writer.writerow(["Satellite Name", "a", "i", "Omega", "omega", "e", "M"])

    print(f"Headers created for {file_path_txt} and {file_path_csv}.")
