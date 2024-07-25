//summation using recursion 
#include<iostream>
using namespace std;

int summation(int N)
{
    if(N==1)
    {
        return 1;
    }
    int sum=0;
    sum=N+summation(N-1);
    return sum;


}






int main()
{
    
    int N;
    cout<<"Enter nth term ";
    cin>>N;
    int y=summation(N);
    cout<<y;
    
}