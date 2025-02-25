//finding power programme using recursion 

#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int poweranswer(int base, int exponent)
{
    if(exponent==0)
    {
        return 1;
    }
    return base*poweranswer(base,exponent-1);
}

int main()
{
    int base,exponent;
    cout<<"Enter the base and poweranswer"<<endl;
    cin>>base>>exponent ;
    cout<<poweranswer(base, exponent);
    return 0;
}
