class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double totalWaitingTime = 0; 
        int currentTime = 0; 
        
        for (int i = 0; i < customers.size(); i++) {
            int arrivalTime = customers[i][0];
            int preparationTime = customers[i][1]; 
            
            if (arrivalTime >= currentTime) {
                totalWaitingTime += preparationTime;
                currentTime = arrivalTime + preparationTime; 
            } 
            else {
                totalWaitingTime += (currentTime - arrivalTime) + preparationTime;
                currentTime += preparationTime; 
            }
        }
        
        return totalWaitingTime / customers.size(); 
    }
};