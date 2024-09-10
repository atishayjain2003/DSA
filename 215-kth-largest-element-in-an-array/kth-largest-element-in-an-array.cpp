class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        int x=nums.size();
        for(int i=0; i<x; i++)
        {
            pq.push(nums[i]);
        }
        int result;
        while(k>0){
            result=pq.top();
            pq.pop();
            k--;
        }
        return result;
    }
};