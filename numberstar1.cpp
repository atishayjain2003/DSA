#include<iostream>
using namespace std;
int main()
{
    int n,rows,columns;
    cout<<"Enter rows";
    cin>>n;
    for(rows=0; rows<n; rows++)
    {
        for(columns=0; columns<2*rows+1; columns++)
        {
            if(columns%2==0)
            {git 
                cout<<rows+1;
            }
            else
            {
                cout<<" * ";
            }
        }
        cout << endl;

    }
}