#include<iostream>
#include<stack>
using namespace std;
int main()
{
    /*stack<int>st;
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
    }*/
    //string reversal using stack 
    string name="ARORA";
    int x=name.length();
    stack<char>value;
    for(int i=0; i<x; i++)
    {
        value.push(name[i]);
    }

    string result="";
    for(int i=0; i<x; i++)
    {
        result+=value.top();
        value.pop();
    }

    //cout<<"The reversed string is "<<result;

    if(result==name)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }


    
}