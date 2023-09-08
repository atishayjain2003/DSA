//Number of 0 and 1 in an array
#include<iostream>
using namespace std;
int main()
{
    int arr[10], counter0=0, counter1=0, i;
    cout<<"Enter array elements ";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<10; i++)
    {
        if(arr[i]==1)
        {
            counter1++;
        }
        else if(arr[i]==0)
        {
            counter0++;
        }
    }
    cout<<"The number of 0's are "<<counter0<<endl;
    cout<<"The number of 1's are "<<counter1<<endl;
}