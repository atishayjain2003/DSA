/*
The product difference between two pairs (a, b) and (c, d) is defined as (a * b) - (c * d).

For example, the product difference between (5, 6) and (2, 7) is (5 * 6) - (2 * 7) = 16.
Given an integer array nums, choose four distinct indices w, x, y, and z such that the product difference between pairs (nums[w], nums[x]) and (nums[y], nums[z]) is maximized.

Return the maximum such product difference.
*/

/*
APPROACH : SORT THE ARRAY, THE MAXIMUM PRODUCT CAN BE THE PRODUCT OF LAST TWO AND THE MINIMUM PRODUCT CAN BE THE PRODUCT OF THE FIRST TWO INTEGERS
*/

//SOLUTION
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int x=nums.size();
        sort(nums.begin(), nums.end());
        int prod1= nums[x-1]*nums[x-2];
        int prod2=nums[0]*nums[1];
        return prod1-prod2;
        
    }
};