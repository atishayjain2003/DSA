#include<iostream>
using namespace std;
void print(int array[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }

}
int main()
{
    int size; 
    int i;
    cout<<"Enter size of array ";
    cin>>size;
    int *array=new int[size];
    cout<<"enter array elements ";
    for(i=0; i<size; i++)
    {
        cin>>array[i];
    }
    print(array, size);
}