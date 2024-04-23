class Solution {
public:
    int findLUSlength(string a, string b) {
        int x=a.length();
        int y=b.length();
        if(a==b)
        {
            return -1;
        }
        return max(x,y);
        
    }
};