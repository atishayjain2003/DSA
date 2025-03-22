#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int robHelper(int index, vector<int>& nums, vector<int>& dp) {
        if (index == 0) {
            return nums[0];  // Base case: Only one house
        }
        if (index < 0) {
            return 0;  // Base case: No house left to rob
        }
        if (dp[index] != -1) {
            return dp[index];  // Return cached result
        }

        int pick = nums[index] + robHelper(index - 2, nums, dp);  // Rob current + two steps back
        int nonPick = robHelper(index - 1, nums, dp);  // Skip current house

        dp[index] = max(pick, nonPick);
        return dp[index];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];  // If only one house, rob it
        }

        vector<int> dp(n, -1);

        // Case 1: Exclude last house (rob from 0 to n-2)
        vector<int> case1(nums.begin(), nums.end() - 1);
        fill(dp.begin(), dp.end(), -1);
        int case1Result = robHelper(case1.size() - 1, case1, dp);

        // Case 2: Exclude first house (rob from 1 to n-1)
        vector<int> case2(nums.begin() + 1, nums.end());
        fill(dp.begin(), dp.end(), -1);
        int case2Result = robHelper(case2.size() - 1, case2, dp);

        return max(case1Result, case2Result);
    }
};
