// 48. Rotate Image Problem (Medium)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector <int> ans;
        int n=matrix.size();
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<matrix[i].size(); j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // now we have to reverse the matrix 
        for (int i=0; i<n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }

        
    }
};