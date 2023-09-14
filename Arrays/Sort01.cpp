#include<iostream>
using namespace std;
void sort(int array[], int size)
{
    int i;
    int counter0=0;
    int counter1=0;
    for(i=0; i<size; i++)
    {
        if(array[i]==0)
        {
            counter0++;
        }
        else
        {
            counter1++;
        }
        
    }
    cout<<"The number of zeroes are "<<counter0<<endl;
    cout<<"The number of ones are "<<counter1<<endl;
    
    for(i=0; i<counter0-1; i++)
    {
        array[i]=0;
    }
    for(i=counter0; i<(counter0+counter1); i++)
    {
        array[i]=1;
    }
    for(i=0; i<size; i++)
    {
        cout<<array[i]<<" "<<endl;
    }
}
int main()
{
    int k; 
    int size;
    int array[100];
    cout<<"Enter size of array ";
    cin>>size;
    cout<<"Enter array elements ";
    for(k=0; k<size; k++)
    {
        cin>>array[k];

    }
    sort(array, size);
}