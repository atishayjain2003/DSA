#include<iostream>
using namespace std;
void prime(int number)
{
    int counter=0;
    for(int i=2; i<number/2+1; i++)
    {
        if(number%i==0)
        {
            counter=1;
        }
    }

    if(counter==0)
    {
        cout<<"It is a prime number";
    }
    else
    {
        cout<<"It is not a prime number";
    }
}
int main()
{
    int number;
    cout<<"Enter number to be checked if it is prime or not";
    cin>>number;
    prime(number);
}