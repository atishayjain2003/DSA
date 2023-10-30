/*
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
{
    int n=nums.size();
    int low=0; 
    int high=n-1;
    int mid=(low +high)/2;
    int counter=1;
    while(low<=high)
    {
        if (target==nums[mid])
        {
            return mid;
            break;
            counter=0;
        }
        else if(target>nums[mid])
        {
            low=mid+1;
        }
        else if (target<nums[mid]){
            high=mid-1;
        }
        
       mid=(low+high)/2;
       
       
    }
    return -1;
    
}
        
    }
};