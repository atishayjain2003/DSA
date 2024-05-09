class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        // Sort the happiness values in non-increasing order
        sort(happiness.rbegin(), happiness.rend());

        long long total = 0;
        for (int turn = 0; turn < k; ++turn) {
            // Calculate the happiness contribution of the current child in this turn
            // since his happinness has been decreased for all of the past rounds
            long long current = max(happiness[turn] - turn, 0);
            // Accumulate the happiness contribution
            total+= current;
        }
        return total;
    }
};