class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int x=arr.size();
        int flag=0;
        for(int i=0; i<x-2; i++)
        {
            if((arr[i+2] % 2!=0 && arr[i] % 2!=0))
            {
                if(arr[i+1] % 2!=0)
                {
                    flag=1;
                }
            }
         
        }
        if(flag==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};