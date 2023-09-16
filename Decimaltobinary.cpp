#include<iostream>
using namespace std;
int main()
{
    int number;
    int i=0;
    cout<<"Enter number ";
    cin>>number;
    int array[100];
    while(number>0)
    {
        array[i]=number%2;
        i++;
        number=number/2;
    }
    for(int j=i-1; j>=0; j--)
    {
        cout<<array[j]<<" ";
    }

}