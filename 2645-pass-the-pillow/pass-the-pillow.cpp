class Solution {
public:
    int passThePillow(int n, int time) {
        
        int rounds = time / (n - 1);
        if (rounds % 2 != 0) {
            return n - time % (n - 1);
        } 
        else {
            return time % (n - 1) + 1;
        }
    }
};