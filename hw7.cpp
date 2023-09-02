//prime number checking
#include<iostream>
using namespace std;
int main()
{
    int i,number,c=1;
    cout<<"Enter the number"<<endl;
    cin>>number;
    for(i=2; i<=((number/2)+1); i++)
    {
        if(number%i==0)
        {
            break;
            c=0;
        }   
    }
    if(c==1)
    {
        cout<<"Prime number"<<endl;
    }
    else
    {
        cout<<"Not a Prime number"<<endl;
    }
    
    

}