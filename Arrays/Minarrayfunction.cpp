#include<iostream>
using namespace std;
void min(int array[], int size)
{
    int i;
    int minimum=array[0];
    for(i=0; i<size; i++)
    {
        if(array[i]<minimum)
        {
            minimum=array[i];
        }
    }
    cout<<"The minimum value in the array is "<<minimum<<endl;
}
int main()
{
    int i; 
    int size; 
    int arr[10];
    cout<<"Enter size of array(less than 10) ";
    cin>>size;
    cout<<"Enter array elements ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    min(arr,size);
}