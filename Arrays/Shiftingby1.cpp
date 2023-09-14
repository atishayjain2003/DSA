#include<iostream>
using namespace std;
void shift(int array[], int size)
{
    int i;
    int array1[100];
    for(i=0; i<size; i++)
    {
        if(i==size-1)
        {
            array1[0]=array[size-1];
        }
        else
        {
            array1[i+1]=array[i];
        }
    }
    cout<<"The new array so formed is "<<endl;
    for(i=0; i<size; i++)
    {
        cout<<array1[i]<<" ";
    }
}
int main()
{
    int i, size;
    int array[100];
    cout<<"Enter size of array ";
    cin>>size;
    cout<<"Enter array elements ";
    for(i=0; i<size; i++)
    {
        cin>>array[i];
    }
    shift(array, size);
}
