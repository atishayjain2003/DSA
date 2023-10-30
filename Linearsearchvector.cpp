//Linear search using vector
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void linearSearch(vector<int>& array, int target)
{
    int n=array.size();
    int counter=0;
    int i;
    for(i=0; i<n; i++)
    {
        if(array[i]==target)
        {
            counter=0;
            break;

        }
    else
    {
        counter=1;
    }
    }
    if(counter==0)
    {
        cout<<"Element found at position "<<i+1;

    }
    else
    {
        cout<<"Element not found  ";
    }
    
}
int main()
{
    vector<int> array1;
    int size;
    cout<<"Enter number of elements to be stored in array";
    cin>>size;
    cout<<"Enter array elements ";
    for(int i=0; i<size; i++)
    {
         int value;
         cin>>value;
         array1.push_back(value);
    }
    int target;
    cout<<"Enter target element"<< endl;
    cin>>target;
    linearSearch(array1, target);
}