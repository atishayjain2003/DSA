#include<iostream>
using namespace std;
#include <bits/stdc++.h>
void binary(int number)
{
    int i=0; 
    int sum=0;
    int temp=number;
    int bit;
    while(number>0)
    {
        bit=number%10;
        number=number/10;
        sum+=bit*pow(2,i);
        i++;
    }
    cout<<"The decimal number is "<<endl<<sum;

}
int main()
{ 
    int number1;
    cout<<"Enter binary number ";
    cin>>number1;
    binary(number1);

}