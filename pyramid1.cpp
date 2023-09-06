#include<iostream>
using namespace std;
int main()
{
    int n, rows,columns, star, space;
    cout<<"Enter rows";
    cin>>n;
    for(rows=0; rows<n; rows++)
    {
        //printing spaces
        for(columns=0; columns<n-rows-1; columns++)
        {
            cout<<" ";
        }
        for(columns=0; columns<rows+1; columns++)
        {
            cout<<"* ";
        }
        cout << endl;

    }

    
}