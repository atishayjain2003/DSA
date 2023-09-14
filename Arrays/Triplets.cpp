#include<iostream>
using namespace std;
void triplets(int array[], int size)
{
    int i,j,k;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size;j++)
        {
            for(k=0; k<size; k++)
            {
                cout<<array[i]<<","<<array[j]<<","<<array[k]<<endl;
            } 
        }
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
    triplets(array, size);
}