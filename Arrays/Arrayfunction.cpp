#include <iostream>
using namespace std;
void Output(int array[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
}






int main()
{
    int i;
    int size;
    int array[100];
    cout<<"Enter size of array ";
    cin>>size;
    cout<<"Enter array elements ";
    for(i=0; i<size; i++)
    {
        cin>>array[i];
    }
    cout<<"The array so formed is ";
    Output(array,size);
}