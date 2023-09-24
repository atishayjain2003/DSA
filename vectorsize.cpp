#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
    for(int i=0; i<5; i++)
    {
        arr.push_back(i);
        cout<<"The size of array is "<<arr.size()<<endl;
        cout<<"The capacity of array is "<<arr.capacity()<<endl;

    }
}