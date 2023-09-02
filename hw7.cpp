//prime number checking
#include<iostream>
using namespace std;
int main()
{
    int i,number,c=1;
    cout<<"Enter the number"<<endl;
    cin>>number;
    for(i=2; i<=((number+1)/2); i++)
    {
        if(number%i==0)
        {
            break;
            //cout<<"Not a prime"<<endl;
            c=0;
        }
    }
    if(c==0)
    {
        cout<<"Not a prime"<<endl;
    }
    else
    {
        cout<<"Prime"<<endl;
    }
  
}