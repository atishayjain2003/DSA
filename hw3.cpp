//finding simple interest
#include<iostream>
using namespace std;
int main()
{
    int p,r,t,si;
    cout<<"Enter principal"<<endl;
    cin>>p;
    cout<<"Enter rate"<<endl;
    cin>>r;
    cout<<"Enter time"<<endl;
    cin>>t;
    si=((p*r*t)/100);
    cout<<"The simple interest is"<<endl<<si;

}