class Solution {
public:
    int f(int i, int j, vector<vector<int>> &obstacleGrid, vector<vector<int>> &dp) {
        
        
        // Base case for reaching the top-left corner
        if (i == 0 && j == 0) {
                if(obstacleGrid[0][0]==1)
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
        }

        if (i < 0 || j < 0 || obstacleGrid[i][j] == 1) {
            return 0;
        }


        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        
   
        int left = f(i, j - 1, obstacleGrid, dp);
        int up = f(i - 1, j, obstacleGrid, dp);
        
        dp[i][j] = (up + left);
        return dp[i][j];
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return f(m - 1, n - 1, obstacleGrid, dp);
    }
};
