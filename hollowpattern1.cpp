//rectangular hollow pattern
#include<iostream>
using namespace std;
int main()
{
    int rows, columns,i,j;
    cout<<"Enter rows";
    cin>>rows;
    cout << endl;
    cout<<"Enter columns";
    cin>> columns;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            if(i==0 || i==rows-1)
            {
                cout<<"*";
            }
            else
            {
                if(j==0 || j==columns-1)
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