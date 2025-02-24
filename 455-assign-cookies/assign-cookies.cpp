class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int x=g.size();
        int y=s.size();
        int left=0; int right=0;
        while(left < y && right < x)
        {
            if(s[left]>=g[right])
            {
                right++;
            }
            left++;
        }
        return right;
        
    }
};