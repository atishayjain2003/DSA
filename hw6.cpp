//max of 3 numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b>>c;
    //automatically goes to next line to take inputs
    if(a>b && a>c)
    {
        cout<<"The max number is"<<endl<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"The max number is"<<endl<<b;
    }
    else
    {
        cout<<"The max number is"<<endl<<c;
    }

}