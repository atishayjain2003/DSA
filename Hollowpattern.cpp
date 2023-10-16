#include<iostream>
using namespace std;
int main()
{
    int row, column;
    for(row=0; row<4; row++)
    {
        for(column=0; column<4; column++)
        {
            if(row==0 || row==3)
            {
                cout<<"*";
            }
            else
            {
                if(column==0 || column==3)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout << endl; 
    }
}