#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    /*stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    */
   // cout<<st.top();
   //displaying stack elements
    //int y=st.size();
    //cout<<y;
    /*for(int i=0; i<y; i++)
    {
        cout<<st.top()<<endl;
        st.top()--;
    }
    */
   //array reversal using two stacks
   stack<int>first;
   first.push(10);
   first.push(20);
   first.push(30);
   first.push(40);
   first.push(50);
   stack<int>second;
   int size1=first.size();
   for(int i=0; i<size1; i++)
   {
    second.push(first.top());
    first.top()--;
   }
   int size2=second.size();
   for(int i=0; i<size2; i++)
   {
    cout<<second.top()<<endl;
    second.top()--;
   }

}
