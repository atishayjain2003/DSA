/*Given an integer x, return true if x is a 
palindrome
, and false otherwise.
*/


class Solution {
public:
    bool isPalindrome(long x) {
        long temp=x;
        long remainder=0;
        long reverse=0;
        while (x>0)
        {
            remainder=x%10;
            x=x/10;
            reverse=(reverse*10)+remainder;
        
        }
        if (temp==reverse)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};


