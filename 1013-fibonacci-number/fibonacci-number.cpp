class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;  // Handle base cases
        
        vector<int> dp(n + 1, -1);
        dp[0] = 0; 
        dp[1] = 1;
        
        for (int i = 2; i <= n; i++) {  // Loop should run till n
            dp[i] = dp[i - 1] + dp[i - 2];  // Update dp[i], not dp[n]
        }
        return dp[n];  // Return dp[n] instead of dp[i]
    }
};
