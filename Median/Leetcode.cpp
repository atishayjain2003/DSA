/*
4. Median of Two Sorted Arrays
Solved
Hard
Topics
Companies
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
*/

//Solution approach: Take the new array in which there are sorted elements and then take the median, since the solution needs to be Ologn hence use binary search
// Solution

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>final;
        for(int i=0; i<nums1.size(); i++)
        {
            final.push_back(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++)
        {
            final.push_back(nums2[i]);
        }
        sort(final.begin(),final.end());
        int x=final.size();
        int median;
        int low;
        int high;
        int mid;
        float median1;
        if(x%2!=0)
        {
            median=x/2;
            median1=final[median];
        }
        else
        {
            mid=x/2;
            median1=(final[mid]+final[mid-1])/2.0;

        }
        return median1;
    }
};