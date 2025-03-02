// to understand difference between passing by reference and passing by value 

#include <iostream>
#include<vector>
using namespace std;

void multiplication(vector<int>&arr, int n, int index)
{
    if(index>=n)
    {
        return;
    }
    arr[index]=arr[index]*2;
    
    multiplication(arr, n, index+1);
    
    
}





int main()
{
    vector<int>arr={1,2,3,4,5};
    int n=arr.size();
    int index=0;
    multiplication(arr, n, index);
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


// passing as normal then original values , otherwise modified values 