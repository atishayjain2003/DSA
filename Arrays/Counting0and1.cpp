#include<iostream>
using namespace std;
void count(int array[], int size)
{
    int i; 
    int counter1=0;
    int counter0=0;
    for(i=0; i<size; i++)
    {
        if(array[i]==0)
        {
            counter0++;
        }
        else if(array[i]==1)
        {
            counter1++;
        }
    }
    cout<<"Total 0's in array are "<<counter0<<endl;
    cout<<"Total 1's in array are "<<counter1<<endl;
}
int main()
{
    int i;
    int arr[10];
    int size;
    cout<<"Enter size of array(less than 10)";
    cin>>size;
    cout<<"Enter array elements ";
    for(i=0; i<size;i++)
    {
        cin>>arr[i];
    }
    count(arr,size);
}