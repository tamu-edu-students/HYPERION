from agi.stk12.stkobjects import *
from datetime import datetime
from .stkObject import STKContainerObject 

class Chain(STKContainerObject):
    def __init__(self, root, name, unload=True):
        super().__init__(root, name, AgESTKObjectType.eChain, unload=unload)

    def _loadObjectImplementation(self):
        # Create the chain in STK
        self.chain = self.root.CurrentScenario.Children.New(AgESTKObjectType.eChain, self.name)
        self.chain.ClearAccess()

        print(f"Chain '{self.name}' created.")

    def computeTotalAccess(self):
        """
        Computes the access for the chain, merges overlapping intervals, and returns the total duration of valid access intervals in seconds.
        """
        try:
            self.chain.ComputeAccess()
            print(f"Access computed for chain '{self.name}'.")

            objectParticipationIntervals = self.chain.Vgt.EventIntervalCollections.Item('StrandAccessIntervals')
            intervalListResult = objectParticipationIntervals.FindIntervalCollection()

            # Store intervals as tuples of (start_time, stop_time)
            intervals = []

            for i in range(intervalListResult.IntervalCollections.Count):
                if intervalListResult.IsValid:
                    for j in range(intervalListResult.IntervalCollections.Item(i).Count):
                        start_time = datetime.strptime(intervalListResult.IntervalCollections.Item(i).Item(j).Start, "%d %b %Y %H:%M:%S.%f")
                        stop_time = datetime.strptime(intervalListResult.IntervalCollections.Item(i).Item(j).Stop, "%d %b %Y %H:%M:%S.%f")
                        intervals.append((start_time, stop_time))

            # Step 1: Sort intervals by start time
            intervals.sort()

            # Step 2: Merge overlapping or contiguous intervals
            merged_intervals = []
            current_start, current_end = intervals[0]

            for start, end in intervals[1:]:
                if start <= current_end:  # Overlapping or contiguous interval
                    current_end = max(current_end, end)
                else:  # No overlap, add the current interval and move to the next
                    merged_intervals.append((current_start, current_end))
                    current_start, current_end = start, end

            # Add the last merged interval
            merged_intervals.append((current_start, current_end))

            # Step 3: Calculate total duration of merged intervals
            total_access_duration = 0
            for start, end in merged_intervals:
                duration = (end - start).total_seconds()
                total_access_duration += duration
                print(f"Merged Interval: Start: {start}, Stop: {end}, Duration: {duration:.2f} seconds")

            print(f"Total merged access duration: {total_access_duration:.2f} seconds")
            return total_access_duration

        except Exception as e:
            print(f"Error computing access for chain '{self.name}': {str(e)}")
            return 0

    def saveObject(self):
        """
        TODO: Might be unecessary?
        """
        return
