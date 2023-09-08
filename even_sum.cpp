// sum of all even numbers upto n
#include <iostream>
using namespace std;
int even_sum(int number)
{
    int sum=0;
    for(int i=1; i<=number; i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }

    }return sum;
}
int main()
{
    int number;
    cout<<"Enter number upto which sum is to be found ";
    cin>>number;
    int sum=even_sum(number);
    cout<<"The required sum is "<<sum;
}