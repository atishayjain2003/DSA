#include<iostream>
using namespace std;
int main()
{
    int rows,columns,n;
    cout<<"Enter rows";
    cin>>n;
    for(rows=0; rows<n; rows++)
    {
        //defining stars
        for(columns=0; columns<n-rows; columns++)
        {
            cout<<"* ";
        }
        //defining spaces
        for(columns=0; columns<(2*rows+1); columns++)
        {
            cout<<"  ";
        }
        //defining stars again
        for(columns=0; columns<n-rows; columns++)
        {
            cout<<"* ";
        }
        cout << endl;
    }

     for(rows=0; rows<n; rows++)
     { 
        for(columns=0; columns<rows+1; columns++)
        {
            cout<<"* ";
        }
        //defining spaces
        for(columns=0; columns<(2*n-2*rows-1); columns++)
        {
            cout<<"  ";
        }
        //defining stars again
        for(columns=0; columns<rows+1; columns++)
        {
            cout<<"* ";
        }
        cout << endl;


    }
}