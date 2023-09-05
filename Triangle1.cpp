#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter rows";
    cin>>n;
    int i,j;
    for (i=0; i<n; i++)
    {
        for(j=0; j<i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}