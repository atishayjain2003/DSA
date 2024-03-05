#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
int main()
{
    cout<<"Enter two numbers "<< endl;
    int a,b;
    cin>>a>>b;
    vector<int>result;
    if(b>a)
    {
    for(int i=1; i<=a; i++)
    {
        if(b%i==0 && a%i==0)
        {
            result.push_back(i);
        }
    }
    }
    else{
        for(int i=1; i<=b; i++)
    {
        if(b%i==0 && a%i==0)
        {
            result.push_back(i);
        }
    }

    }
    sort(result.begin(),result.end());
    int x=result.size();
    int gcd=result[x-1];

    cout<<"The greatest common divisor is "<<gcd;



}