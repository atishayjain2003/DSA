//recursive programme to find maximum in an array 

#include <iostream>
#include<vector>
using namespace std;
#include<bits/stdc++.h>
void maximumusingrecursion(vector<int>&arr, int n, int index, int &max)
{
    if(index>=n)
    {
        return;
    }
    if(arr[index]>max)
    {
        max=arr[index];
    }
    maximumusingrecursion(arr, n, index+1, max);
}

int main()
{
    vector<int>arr={1,2,3,4,5};
    int n=arr.size();
    int index=0;
    int max=INT_MIN;
    maximumusingrecursion(arr, n, index, max);
    cout<<max;

}