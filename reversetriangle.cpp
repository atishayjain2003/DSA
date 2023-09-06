#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter rows";
    cin>>rows;
    cout << endl;
    int i, j;
    for (i=rows; i>0; i--)
    {
        for(j=1; j<i+1; j++)
        {
            cout<<"*"<<" ";
        }
        cout << endl;
    }
}