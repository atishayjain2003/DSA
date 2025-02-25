#include<iostream>
using namespace std;
int main()
{
    int base, power;
    cout<<"Enter base";
    cin>>base;
    cout<<"Enter power";
    cin>>power;
    int result=1;
    for(int i=1; i<=power; i++)
    {
        result=result*base;
    }
    cout<<"The power of "<<base<<" raised to "<<power<<" is "<<result;
}