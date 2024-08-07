class Solution {
public:
    int solveUsingMem(vector<int>& coins, int amount, vector<int>& dp) {
        // Base case
        if (amount == 0) {
            return 0;
        }
        // If the answer already exists
        if (dp[amount] != -1) {
            return dp[amount];
        }
        // Recursive relation
        int mini = INT_MAX;
        for (int i = 0; i < coins.size(); i++) {
            // Find answer using ith coin
            // Call recursion only for valid amounts i.e., amounts >= 0
            if (amount - coins[i] >= 0) {
                int recursionAns = solveUsingMem(coins, amount - coins[i], dp);
                // If a valid answer
                if (recursionAns != INT_MAX) {
                    // Considering usage of ith coin
                    int ans = 1 + recursionAns;
                    mini = min(mini, ans);
                }
            }
        }
        dp[amount] = mini;
        return dp[amount];
    }

    int coinChange(vector<int>& coins, int amount) {
        // Using memoization
        vector<int> dp(amount + 1, -1);
        int ans = solveUsingMem(coins, amount, dp);
        if (ans == INT_MAX)
            return -1;
        else {
            return ans;
        }
    }
};
