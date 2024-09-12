class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int x=intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>ans;
        for(int i=0; i<x; i++)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(!ans.empty() && end<=ans.back()[1])
            {
                continue;
            }
            for(int j=i+1; j<x; j++)
            {
                if(intervals[j][0]<=end)
                {
                    end=max(end,intervals[j][1]);
                }
                else
                {
                    break;
                }
            }
            ans.push_back({start,end});
        }
        return ans;
        
    }
};