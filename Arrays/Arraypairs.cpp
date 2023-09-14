//Finding out all the array pairs 
#include<iostream>
using namespace std;
void arraypair(int arrary[], int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
          {
            cout<<arrary[i]<<","<<arrary[j]<<endl;
          }
    }
}
int main()
{
    int i,j,size;
    int array[100];
    cout<<"Enter size of array ";
    cin>>size;
    cout<<"Enter array elements ";
    for(i=0; i<size; i++)
    {
        cin>>array[i];
    }
    arraypair(array, size);
}