class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));

        // Base case: Copy first row
        for (int j = 0; j < m; j++) {
            dp[0][j] = matrix[0][j];
        }

        // Fill DP table
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int up = dp[i-1][j];
                int diagleft = (j > 0) ? dp[i-1][j-1] : INT_MAX;
                int diagright = (j < m-1) ? dp[i-1][j+1] : INT_MAX;
                
                dp[i][j] = matrix[i][j] + min(up, min(diagleft, diagright));
            }
        }

        // Answer is the minimum value in the last row
        return *min_element(dp[n-1].begin(), dp[n-1].end());
    }
};
