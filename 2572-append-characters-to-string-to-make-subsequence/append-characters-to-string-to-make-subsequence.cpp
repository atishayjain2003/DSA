const static int _ = [](){
         ios::sync_with_stdio(false);
         cin.tie(nullptr);
         cout.tie(nullptr);
         return 0;
}();

class Solution {
public:
    int appendCharacters(string s, string t) {
        int len1 = s.size();
        int len2 = t.size();
        int j=0;
     for(auto i: s){
         // match the string..
         if(i==t[j]){
             j++;
         }
     }
     // return the length..
        return len2 - j;
    }
};