//finding maximum value in an array
#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[5]={10,20,30,4025,78};
    int min=arr[0];
    for(i=0; i<5; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"The minimum value in the array is "<<min;

}