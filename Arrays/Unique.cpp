#include<iostream>
using namespace std;
void unique(int array[], int size)
{
    int i;
    int x=0; 
    for(i=0; i<size; i++)
    {
        x^=array[i];
    }
    cout<<"The unique element is "<<x<<endl;
}
int main()
{
    int i,size;
    int array[100];
    cout<<"Enter the size of array";
    cin>>size;
    cout<<"Enter array elements ";
    for(i=0; i<size; i++)
    {
        cin>>array[i];
    }
    unique(array, size);
}