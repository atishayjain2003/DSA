/*
2413. Smallest Even Multiple
Easy
813
93
Companies
Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
 

Example 1:

Input: n = 5
Output: 10
Explanation: The smallest multiple of both 5 and 2 is 10.
Example 2:

Input: n = 6
Output: 6
Explanation: The smallest multiple of both 6 and 2 is 6. Note that a number is a multiple of itself. 
*/

//Approach: If the number is even, then it is the required answer as 2 given even numbers or else if the number is odd then the answer is 2*n


//Solution

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n%2==0)
        {
            return n;
        }
        else if(n%2!=0)
        {
            return 2*n;

        }
        else{
            return 0;
        }
    
        
    }
};