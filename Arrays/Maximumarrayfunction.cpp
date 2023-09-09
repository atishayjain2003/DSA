#include<iostream>
using namespace std;
void max(int array[], int size)
{
    int i;
    int maximum=array[0];
    for(i=0; i<size; i++)
    {
        if(array[i]>maximum)
        {
            maximum=array[i];
        }
    }
    cout<<"The maximum value in the array is "<<maximum<<endl;
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
    max(arr,size);
}