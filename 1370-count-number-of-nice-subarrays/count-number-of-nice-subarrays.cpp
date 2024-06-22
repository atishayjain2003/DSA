class Solution {
public:
    static int numberOfSubarrays(vector<int>& nums, int k) {
        const int n = nums.size();
        vector<int> cntOdds(n+1, 0); // 1-indexed prefix sum count of odds

        // Create the prefix sum array
        for (int i = 0; i < n; i++) 
            cntOdds[i+1] = cntOdds[i] + (nums[i] & 1);

        int l=0, cnt=0;
        for (int r=0; r < n; r++) {
            // Ensure the current window [l, r] has at least k odd numbers
            while (l<=r && cntOdds[r+1] - cntOdds[l] > k) 
                l++;

            // If the current window [l, r] has exactly k odd numbers
            if (cntOdds[r+1]-cntOdds[l] == k) {
                int l0 = l;
                // Count nice subarrays ending at r
                while (l0 <= r && cntOdds[r+1]-cntOdds[l0] == k) {
                    cnt++;
                    l0++;
                }
            }
        }
        return cnt;
    }
};

auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();