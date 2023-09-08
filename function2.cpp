#include<iostream>
using namespace std;
int add(int a, int b)
{
    cout<<"The required sum is "<<a+b;
}
int main()
{
    int x,y;
    cout<<"Enter numbers to be addedd";
    cin>>x>>y;
    add(x,y);
}