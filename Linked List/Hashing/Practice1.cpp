#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int hash[1000]={0};
    int arr[6]={1,2,3,3,4,1};
    int x=sizeof(arr);
    for(int i=0; i<x; i++)
    {
        hash[arr[i]]++;
    }
    //find out the frequency of 3
    cout<<hash[4];
}