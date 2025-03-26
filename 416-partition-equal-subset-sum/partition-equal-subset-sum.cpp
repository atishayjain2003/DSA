#include <vector>
using namespace std;

class Solution {
public:
    bool isSubsetSumUtil(int index, int target, vector<int>& arr, vector<vector<int>>& dp) {
        // Base Cases
        if (target == 0) return true;  // If sum becomes 0, subset is found
        if (index == 0) return arr[0] == target;  // Only one element left

        // Check if already computed
        if (dp[index][target] != -1) return dp[index][target];

        // **Non-Pick**: Do not take the element
        bool notTake = isSubsetSumUtil(index - 1, target, arr, dp);

        // **Pick**: Take the element if it doesn't exceed target
        bool take = false;
        if (arr[index] <= target) {
            take = isSubsetSumUtil(index - 1, target - arr[index], arr, dp);
        }

        return dp[index][target] = take || notTake;
    }

    bool isSubsetSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));
        return isSubsetSumUtil(n - 1, target, arr, dp);
    }

    bool canPartition(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }

        // If total sum is odd, partitioning into two equal subsets is impossible
        if (totalSum % 2 != 0) return false;

        // Check if there exists a subset with sum = totalSum / 2
        return isSubsetSum(nums, totalSum / 2);
    }
};
