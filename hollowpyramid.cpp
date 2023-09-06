#include<iostream>
using namespace std;
int main()
{
    int n, row, column;
    cout<<"enter row";
    cin>>n;
    //defining rows
    for(row=0; row<n; row++)
    {
        //defining spaces
        for(column=0; column<n-row-1; column++)
        {
            cout<<" ";
        }
        //defining spaces
        for(column=0; column<row+1; column++)
        {
            {
                if(column==0 || column==row)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            
        }
        cout << endl;
        // we need to print stars only for first and last column
    }




}