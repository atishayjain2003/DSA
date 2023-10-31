/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include<iostream>
#include<vector>
using namespace std;
void sum(vector<int>array, int target)
{
    int n=array.size();
    int i; 
    int j;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if((array[i]+array[j])==target)
            {
                cout<< "The indices are "<<i<<" "<<j<< endl;
            }
        }
    }
}
int main()
{
    vector<int>array;
    array={3,2,4};
    int target=6;
    sum(array,target);
}