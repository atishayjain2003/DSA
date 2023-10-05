#include<iostream>
using namespace std;
void Palindrome(int number)
    {
        int temp=number;
        int reverse=0;
        int remainder=0;
        while (number>0)
        {
            remainder=number%10;
            number=number/10;
            reverse=(reverse*10)+remainder;
        }
        if (temp==reverse)
        {
            cout<<"Palindrome";
        }
        else
        {
            cout<<"Not a Palindrome";
        }


    }
int main()
{
int number;
cout<<"Enter number";
cin>>number;
Palindrome(number);
}
