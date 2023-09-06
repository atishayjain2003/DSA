#include<iostream>
using namespace std;
int main()
{
    int n,row,column;
    cout<<"enter rows";
    cin>>n;
    // describing the outer loop

    for(row=0; row<n; row++)
    {
        //defining space
        
        for(column=0; column<row; column++)
        {
            cout<<" ";
        }
        // defining stars
        for(column=0; column<n-row; column++)\
        {
            cout<<"* ";
        }
        cout << endl;

        
    }
}