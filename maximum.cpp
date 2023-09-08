//maximum of 3 numbers using function

#include<iostream>
using namespace std;
void max(int a, int b, int c)
{
    if (a>b && a>c)
    {
        cout<<"The maximum value is "<<a<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"The maximum value is "<<b<<endl;

    }
    else
    {
        cout<<"The maximum value is "<<c<<endl;
    }
}
int main()
{
    int x,y,z;
    cout<<"Enter 3 numbers";
    cin>>x>>y>>z;
    max(x,y,z);
}