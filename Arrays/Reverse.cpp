#include<iostream>
using namespace std;
int main()
{
    int i;
    int array[5], array1[5];
    cout<<"Enter array elements ";
    for(i=0; i<5; i++)
    {
        cin>>array[i];
    }
    cout<<"The entered array is"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<array[i]<<" ";
    }
    cout << endl;
    int hello[5];
    int k=0;
    for(i=4; i>=0; i--)
    {
        hello[k]=array[i];
        k++;
    }
    cout<<"The reversed array is ";
    for(i=0; i<5; i++)
    {
        cout<<hello[i]<<" ";
    }
}
