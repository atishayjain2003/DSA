#include<iostream>
using namespace std;
int evenodd(int number)
{
    if(number%2==0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }

}
int main()
{
    int x;
    cout<<"Enter number to check if its even or odd ";
    cin>>x;
    evenodd(x);

}