class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int intervalCount = intervals.size();
        
        if (intervalCount == 0) {
            return {};
        }

        // Sort intervals based on the starting time of each interval
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> mergedIntervals;

        // Start with the first interval
        mergedIntervals.push_back(intervals[0]);

        for (int i = 1; i < intervalCount; i++) {
            // If the current interval does not overlap with the last merged interval
            if (intervals[i][0] > mergedIntervals.back()[1]) {
                // No overlap, so add the current interval
                mergedIntervals.push_back(intervals[i]);
            } else {
                // There is overlap, so merge the intervals by updating the end time
                mergedIntervals.back()[1] = max(mergedIntervals.back()[1], intervals[i][1]);
            }
        }

        return mergedIntervals;
    }
};
