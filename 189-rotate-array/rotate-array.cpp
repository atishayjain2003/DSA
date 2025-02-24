class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int x = nums.size();
        k = k % x;  // Handle cases where k > x
        
        // Create a new array to hold the rotated result
        vector<int> result;

        // Copy the last k elements to the start of result
        for (int i = x - k; i < x; i++) {
            result.push_back(nums[i]);
        }

        // Copy the first x - k elements to the end of result
        for (int i = 0; i < x - k; i++) {
            result.push_back(nums[i]);
        }

        // Update the original array
        nums = result;
    }
};
