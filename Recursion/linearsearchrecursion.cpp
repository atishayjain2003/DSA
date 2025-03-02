#include <iostream>
#include<vector>
using namespace std;
#include<bits/stdc++.h>
void linearsearchrecursion(vector<int>&result, int n, int index, int key)
{
    if(index>=n)
    {
        return;
    }
    if(result[index]==key)
    {
        cout<<"Element found at index "<<index;
        return;
    }
    linearsearchrecursion(result, n, index+1, key);
}


int main()
{
    vector<int>result={1,2,3,4,5};
    int n=result.size();
    int index=0;
    int key=3;
    linearsearchrecursion(result, n, index, key);
}