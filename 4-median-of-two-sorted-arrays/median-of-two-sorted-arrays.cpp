const static int _ = [](){
         ios::sync_with_stdio(false);
         cin.tie(nullptr);
         cout.tie(nullptr);
         return 0;
}();
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>final;
        for(int i=0; i<nums1.size(); i++)
        {
            final.push_back(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++)
        {
            final.push_back(nums2[i]);
        }
        sort(final.begin(),final.end());
        int x=final.size();
        int median;
        int low;
        int high;
        int mid;
        float median1;
        if(x%2!=0)
        {
            median=x/2;
            median1=final[median];
        }
        else
        {
            mid=x/2;
            median1=(final[mid]+final[mid-1])/2.0;

        }
        return median1;
    }
};