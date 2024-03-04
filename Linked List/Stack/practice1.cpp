#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    int x;
    cout<<"Enter number of elements to be added in stack ";
    cin>>x;
    int value;
    for(int i=0; i<x; i++)
    {
        cin>>value;
        st.push(value);
    }
    int top=st.top();
    cout<< endl<< "The stack is "<< endl;
    for(int i=0; i<x; i++)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}