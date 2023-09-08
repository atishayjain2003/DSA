//Sum of array elements
#include<iostream>
using namespace std;
int main()
{
    int array[5], n, i;
    cout<<"Enter array elements ";
    int sum=0;
    for(i=0; i<5; i++)
    {
        cin>>array[i];
    }
    for(i=0; i<5; i++)
    {
        sum+=array[i];
    }
    cout<<"The sum of array inputs is "<<sum;
}