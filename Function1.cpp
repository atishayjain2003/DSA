//function to calculate factorial of a number

#include<iostream>
using namespace std;
void fact(int n)
{
    int prod=1;
    for(int i=n; i>=1; i--)
    {
        prod=prod*i;
    }
    cout<<"Factorial is "<<prod;
}
int main()
{
    int x;
    cout<<"Enter number whose factorial is to be calculated";
    cin>>x;
    fact(x);
}