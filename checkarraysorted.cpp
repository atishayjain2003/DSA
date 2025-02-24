#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool checksortedarray(vector<int>arr, int i, int n)
{
    if(i==n-1){
        return true;
    }
    if(arr[i+1]<arr[i])
    {
        return false;
    }
    return checksortedarray(arr, i+1, n);
}

int main()
{
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    int n = arr.size();
    bool x=checksortedarray(arr, 0, n);
    cout<<x;
}
