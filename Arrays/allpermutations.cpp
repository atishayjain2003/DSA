#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    string s="xy";
    int x=s.length();
    for (int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(i!=j)
            {
                swap(s[i], s[j]);
                cout<<"The permutation is "<<s<<endl;
            } 
        }
    }
}

// Time Complexity: O(n^2)
// Space Complexity: O(n)