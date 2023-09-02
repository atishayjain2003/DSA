//Print all the even numbers from 1 to N where N is the user input

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the value of n";
    cout<<"\n";
    cin>>n;
    cout<<"The numbers till n are"<<endl;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }
}