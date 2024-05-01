class Solution {
public:
    string reversePrefix(string word, char ch) {
        int x=word.length();
        int z=0;
        for(int i=0; i<x; i++)
        {
            if(word[i]==ch)
            {
                z=i;
                break;
            }
        }
        int start=0; 
        int end=z;
        while(start<end)
        {
            swap(word[start],word[end]);
            start++;
            end--;
        }
        return word;
    }
};