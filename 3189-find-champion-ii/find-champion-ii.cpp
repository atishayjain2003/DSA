#include <vector>
using namespace std;

class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        // Step 1: Create an in-degree array
        vector<int> inDegree(n, 0);
        
        // Step 2: Calculate in-degrees for all nodes
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            inDegree[v]++;
        }
        
        // Step 3: Identify nodes with in-degree 0
        int champion = -1; // Variable to track the champion
        for (int i = 0; i < n; ++i) {
            if (inDegree[i] == 0) {
                // If we already have a champion, return -1 (more than one node with in-degree 0)
                if (champion != -1) return -1;
                champion = i;
            }
        }
        
        // Step 4: Return the champion if unique
        return champion;
    }
};
