#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n";
    cout<<"Understanding if else statement"<<endl;
    cin>>n;
    if (n>5)
    {
        cout<<"Greate than 5";
    }
    // here if the input is 5 then, second statement will be printed
    // because first statement is false, that is 5 is not greater than 5
    // hence second statement is executed
    else
    {
        cout<<"Less than 5";
    }
}