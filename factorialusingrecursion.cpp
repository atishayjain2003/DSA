//factorial using recursion
#include<iostream>
#include<vector>
using namespace std;


int fib(int n)
{
        if(n==0 || n==1)
        {
            return 1;
        }
        return n*fib(n-1);
}



int main()
{
    int y;
    cout<<"Enter the number whose factorial you want to find "<<endl;
    cin>>y;
  int x=fib(y);
  cout<<"the result is "<<x;
}