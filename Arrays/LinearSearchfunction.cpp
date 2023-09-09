#include<iostream>
using namespace std;
void LinearSearch(int array[], int size, int target)
{
    int x,i;
    int counter=0;
    for(i=0; i<size; i++)
    {
        if(array[i]==target)
        {
           counter=1;
           x==i;
           break;
        }
    }
    if(counter==1)
    {
        cout<<"Element found at postion "<<i+1;
    }
    else
    {
        cout<<"Element not found ";
    }
    
}
int main()
{
    int i;
    int arr[10];
    int target;
    int size;
    cout<<"Enter size of array(less than 10) ";
    cin>>size;
    cout<<"Enter array elements ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target element ";
    cin>>target;
    LinearSearch(arr, size, target);
}