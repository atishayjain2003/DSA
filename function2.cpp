#include<iostream>
using namespace std;
int add(int a, int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int x,y;
    cout<<"Enter numbers to be addedd";
    cin>>x>>y;
    cout<<add(x,y);
}