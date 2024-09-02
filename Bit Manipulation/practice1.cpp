#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int>conversion(int n)
{
    vector<int> result;
    while(n>0)
    {
        int remainder=n%2;
        result.push_back(remainder);
        n=n/2;
    }
    
    reverse(result.begin(), result.end());
    return result;
    
}

int main()
{
    int value;
    cout<<"Enter number whose binary equivalent is to be found ";
    cin>>value;
    cout<<endl<<"The equivalent binary conversion is "<<endl;
    vector<int>result=conversion(value);

    int x =result.size();
    for(int i=0; i<x; i++)
    {
        cout<<result[i]<<" ";
    }
}