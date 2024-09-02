#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int hash[1000]={0};
    string s="atishay";
    int x=s.length();
    for(int i=0; i<x; i++)
    {
        hash[s[i]-'a']++;
    }
    //find out the frequency of 3
    cout<<hash['t'-'a'];
}