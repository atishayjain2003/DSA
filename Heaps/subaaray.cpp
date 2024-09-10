#include<iostream>
#include<array>
using namespace std;

int main()
{
    int array[5]={1,2,3,4,5};
    cout<<"The sub arrays are "<<endl;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            for(int k=i; k<j; k++)
            {
                cout<<array[k]<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;

}