class Solution {
public:
    int climbStairs(int n) {
      int prev=0;
      int prev1=1;
      int ans=0;
      for(int i=0;i<n; i++)
      {
        ans=prev+prev1;
        prev=prev1;
        prev1=ans;
      }
      return ans;
    }
};