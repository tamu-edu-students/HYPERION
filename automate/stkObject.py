class STKObjectBase:
    def __init__(self, root, name, object_type):
        self.root = root
        self.name = name
        self.object_type = object_type
        
        # Ensure no duplicates by deleting existing objects with the same name
        self.delete()

    def delete(self):
        """
        Deletes an existing object with the same name in the scenario to avoid duplication.
        """
        try:
            existing_object = self.root.CurrentScenario.Children.Item(self.name)
            if existing_object:
                print(f"Object '{self.name}' already exists. Deleting it...")
                existing_object.Unload()
                print(f"Object '{self.name}' deleted.")
        except Exception:
            print(f"No existing object named '{self.name}' found.")

    def add(self):
        """
        Creates a new object in STK based on its type.
        """
        raise NotImplementedError("Subclasses must implement the `add` method.")
    
    def save(self):
        """
        Saves object details to a txt file.
        """
        raise NotImplementedError("Subclasses must implement the `save` method.")