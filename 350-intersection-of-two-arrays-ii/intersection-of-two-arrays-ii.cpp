class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>final;
        int i=0; int j=0;
        int x=nums1.size();
        int y=nums2.size();
        while(i<x && j<y )
        {
            if(nums1[i]==nums2[j])
            {
                final.push_back(nums1[i]);
                i++;
                j++;

            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
        }
        return final;
        
    }
};