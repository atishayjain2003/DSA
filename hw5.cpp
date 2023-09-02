//factorial of a number
#include <iostream>
using namespace std;
int main()
{
    int number, fact=1,i;
    cout<<"Enter number whose factorial is to be calculated"<<endl;
    cin>>number;
    for(i=number; i>=1; i--)
    {
        fact=fact*i;
    }
    cout<<"The factorial of the number is"<<endl<<fact;
}