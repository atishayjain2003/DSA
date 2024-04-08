const static int _ = [](){
         ios::sync_with_stdio(false);
         cin.tie(nullptr);
         cout.tie(nullptr);
         return 0;
}();
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        // vector<int>final;
        for(int i=0; i<nums1.size(); i++)
        {
            for(int j=0; j<nums2.size(); j++)
            {
                if(nums1[i]==nums2[j])
                {
                    s.insert(nums1[i]);
                    // break;
                }
            }
        }
        vector<int> ans(s.begin(),s.end());
        return ans;

      
    }
};