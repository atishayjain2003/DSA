//Sum of all numbers 1 to n
#include <iostream>
using namespace std;
int sum(int number)
{
    int sum=0;
    for(int i=1; i<=number; i++)
    {
        sum+=i;
    }
    cout<<"The required sum is "<<sum;
}
int main()
{
    int number;
    cout<<"Enter number till which sum is to be found ";
    cin>>number;
    sum(number);
}