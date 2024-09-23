class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.length();
        vector<int> dp(n + 1, n);  // Initialize dp array, where dp[i] is the min extra chars for the first i characters of s
        dp[0] = 0;  // No extra characters when no characters are processed
        
        // Insert all dictionary words into a set for fast lookup
        unordered_set<string> dict(dictionary.begin(), dictionary.end());
        
        for (int i = 0; i < n; ++i) {
            // Start by assuming this character is extra
            dp[i + 1] = min(dp[i + 1], dp[i] + 1);
            
            // Try to match dictionary words starting from the current position
            for (int j = i; j < n; ++j) {
                string substr = s.substr(i, j - i + 1);  // Extract substring from s
                if (dict.find(substr) != dict.end()) {
                    // If this substring is in the dictionary, we don't count extra chars for it
                    dp[j + 1] = min(dp[j + 1], dp[i]);
                }
            }
        }
        
        return dp[n];
    }
};
