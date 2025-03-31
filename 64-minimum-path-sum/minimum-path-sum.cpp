class Solution {
public:
    int f(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp) {
        if (i == 0 && j == 0) return grid[0][0];  // Base case: starting point
        if (i < 0 || j < 0) return INT_MAX;  // Out-of-bounds condition

        if (dp[i][j] != -1) return dp[i][j];  // Return memoized result

        int up=INT_MAX,left=INT_MAX;  // Initialize variables

        if (i > 0) 
        {
            up = grid[i][j] + f(i - 1, j, grid, dp);
        }
        if (j > 0) 
        {
            left = grid[i][j] + f(i, j - 1, grid, dp);
        }

        return dp[i][j] = min(up, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));  // Memoization table

        return f(m - 1, n - 1, grid, dp);
    }
};
