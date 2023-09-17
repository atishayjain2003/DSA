#include<iostream>
#include<vector>
using namespace std;
 void print(vector<int>v)
 {
    int i;
    int size=v.size();
    // displaying vector elements
    for(i=0; i<size; i++)
    {
        cout<<v[i]<<" ";
    }
 }
 int main()
 {
    vector<int>array;
    array.push_back(1);
    array.push_back(1);
    array.push_back(1);
    array.push_back(1);
    array.push_back(1);
    array.push_back(1);
    array.push_back(1);
    array.push_back(1);
    print(array);
    
 }