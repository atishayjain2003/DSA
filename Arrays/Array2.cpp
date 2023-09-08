#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int arr[100];
    cout<<"Enter number of array elements(Less than 100)";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The stored array elements are ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

}