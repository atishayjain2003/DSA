class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0; // Current subarray sum
        int maxSum = INT_MIN; // Maximum subarray sum encountered
        int x=nums.size();
        for(int i=0; i<x; i++)
        {
            sum+=nums[i];
            maxSum=max(sum, maxSum);
            if(sum<0) sum=0;
        }
        return maxSum; // Return the maximum subarray sum
    }
};