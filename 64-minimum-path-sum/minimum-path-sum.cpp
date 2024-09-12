class Solution {
public:
    int f(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp) {
        if (i == 0 && j == 0) return grid[0][0];  // Base case: starting point
        if (i < 0 || j < 0) return INT_MAX;  // Out of bounds, return a large value
        
        if (dp[i][j] != -1) return dp[i][j];  // Return cached result if available

        // Calculate the minimum path sum from left and top
        int left = f(i, j - 1, grid, dp);
        int up = f(i - 1, j, grid, dp);

        // Store the result and return it
        return dp[i][j] = grid[i][j] + min(left, up);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();  // Number of rows
        int n = grid[0].size();  // Number of columns
        
        // Initialize dp array with dimensions m x n
        vector<vector<int>> dp(m, vector<int>(n, -1)); 

        // Start from the bottom-right corner
        return f(m - 1, n - 1, grid, dp);
    }
};
