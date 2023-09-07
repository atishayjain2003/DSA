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
    fact(5);
}