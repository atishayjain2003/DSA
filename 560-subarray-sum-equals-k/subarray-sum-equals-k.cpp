class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int x=nums.size();
       int counter=0;
       for(int i=0; i<x; i++)
       {
        int sum=0;
        for(int j=i; j<x; j++)
        {
            sum+=nums[j];
            if(sum==k)
            {
                counter++;
            }
        }
       }
       return counter;
        
    }
};