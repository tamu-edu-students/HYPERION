def clearScenario(scenario):
    while scenario.Children.Count > 0:
        children = scenario.Children
        print(f"Number of objects remaining: {children.Count}")

        for _ in range(children.Count):
            try:
                child = children.Item(0)  # Always delete the first item to avoid skipping
                print(f"Deleting object: {child.InstanceName}")
                child.Unload()
            except Exception as e:
                print(f"Failed to delete object: {e}")
                continue  # Continue if an object fails to delete

    print("All objects have been cleared.")