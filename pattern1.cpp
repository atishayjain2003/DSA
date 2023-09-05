#include<iostream>
//rectangular pattern 1
using namespace std;
int main()
{
    int x,y,i,j;
    cout<<"Enter number of rows";
    cin>>x;
    cout<<"Enter the number of columns";
    cin>>y;
    for (i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            cout<<"* ";

        } 
        cout<<endl;
    }
}