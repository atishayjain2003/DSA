#include<iostream>
using namespace std;
int prod(int a, int b)
{
    int product= a*b;
    return product;
}

int main()
{
    int x,y;
    cout<<"Enter numbers";
    cin>>x>>y;
    int solution=prod(x,y);
    cout<<"The required product is "<<endl<<solution;
}