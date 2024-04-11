class Solution {
public:
    string removeKdigits(string num, int k) {

        //using stack
        stack<int> st;
        int n = num.size();
        if(n == k) return "0";
        string ans="";
        int i =0;
        for(;i<n;i++){
            int ele = num[i]-'0';
            while(!st.empty() && k>0 && st.top() > ele){ 
                k--; 
                st.pop();
            }
            st.push(ele);
        }
        //if k not zero simply remove the stack top as we are storing mono increasing value
        while(!st.empty()){

            if(k==0){
                  ans += st.top()+'0';
            }else{
                k--;
            }
          st.pop();
        }
    
        reverse(ans.begin(),ans.end());
        i=0,n=ans.size();
        //if we have leading zeroes handle it by using this
        // take for example 1000000000 k=1 we remove 1 but all we are left with leading zeroes.
        while(i<n && ans[i] == '0') i++;
        if(i == n) return "0"; //means all leading zeroes
        return ans.substr(i,n-i);
    }
};