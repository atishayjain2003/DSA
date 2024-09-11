
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int x=nums.size();
        int prod=INT_MIN;
        
        for(int i=0; i<x; i++)
        {
            int product=1;
            for(int j=i; j<x; j++)
            {
                product*=nums[j];
                prod=max(prod,product);
            }
        }
        return prod;
    }
};