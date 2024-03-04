#include<iostream>
#include<stack>
#include<vector>
#include<bits/stdc++.h>
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
    /*
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
    /*
    if(result==name)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    */
   //sort a stack
   stack<int>st1;
   stack<int>st2;
   st1.push(14);
   st1.push(8);
   st1.push(97);
   st1.push(2);
   st1.push(45);
   int x=st1.size();
/*
   vector<int>result;
   for(int i=0; i<x; i++)
   {
    result.push_back(st1.top());
    st1.pop();
   }
   sort(result.begin(), result.end());
   for(int i=0; i<x; i++)
   {
    st2.push(result[i]);
   }

   cout<<"The sorted stack in descending order is "<< endl;
   for(int i=0; i<x; i++)
   {
    cout<<st2.top()<<" ";
    st2.pop();
   }
   */
  // insert at the bottom of stack 

  for(int i=0; i<x; i++)
  {
    st2.push(st1.top());
    st1.pop();
  }

  int value;
  cout<<"Enter value to be pushed to the bottom of stack ";
  cin>> value;
  st1.push(value);
  int y=st2.size();
  for(int i=0; i<y; i++)
  {
    st1.push(st2.top());
    st2.pop();
  }
  int z=st1.size();
  cout<<"The new stack is "<< endl;
  for(int i=0; i<z; i++)
  {
    cout<<st1.top()<<" ";
    st1.pop();
  }





    
}