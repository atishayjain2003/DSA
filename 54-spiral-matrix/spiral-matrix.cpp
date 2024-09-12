class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowCount = matrix.size();
        int colCount = matrix[0].size();
        int top = 0;
        int right = colCount - 1;
        int left = 0;
        int bottom = rowCount - 1;
        vector<int> result;

        while (top <= bottom && left <= right) {
            // Traverse from left to right
            for (int col = left; col <= right; col++) {
                result.push_back(matrix[top][col]);
            }
            top++;

            // Traverse downwards
            if (top <= bottom) {
                for (int row = top; row <= bottom; row++) {
                    result.push_back(matrix[row][right]);
                }
                right--;
            }

            // Traverse from right to left
            if (left <= right && top <= bottom) {
                for (int col = right; col >= left; col--) {
                    result.push_back(matrix[bottom][col]);
                }
                bottom--;
            }

            // Traverse upwards
            if (left <= right && top <= bottom) {
                for (int row = bottom; row >= top; row--) {
                    result.push_back(matrix[row][left]);
                }
                left++;
            }
        }
        return result;
    }
};
