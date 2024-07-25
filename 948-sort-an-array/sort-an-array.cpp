const static int _ = [](){
         ios::sync_with_stdio(false);
         cin.tie(nullptr);
         cout.tie(nullptr);
         return 0;
}();


class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums;
    }
};