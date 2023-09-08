//doubling up every array element
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int arr[5];
    cout<<"Enter array elements"<<endl;
    for(i=0; i<5; i++)
    {
        cin>>arr[i];

    }
    for(i=0; i<5; i++)
    {
        arr[i]=2*arr[i];
    }
    cout<<"The new array so formed is ";
    for(i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}