class Solution {
public:
    string reverseWords(string s) {
        string reverse = "";
        int x = s.size();
        stack<string> st;
        
        // Iterate through the string to extract words
        for (int i = 0; i < x; i++) {
            if (s[i] != ' ') {
                reverse += s[i];  // Build the current word
            } else if (s[i] == ' ' && reverse!="") {
                st.push(reverse);  // Push the word to stack when space is encountered
                reverse = "";
            }
        }
        // Push the last word if any
        if (!reverse.empty()) {
            st.push(reverse);
        }

        string result = "";
        
        // Pop words from stack and append to result with a space
        while (!st.empty()) {
            result += st.top() + ' ';
            st.pop();
        }
        
        // Remove the last trailing space
        if (!result.empty()) {
            result.pop_back();
        }

        return result;
    }
};
