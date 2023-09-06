#include<iostream>
using namespace std;
int main()
{
    int rows,i,j;
    for(i=0; i<rows; i++)
    {
        for(j=1; j<i+1; j++)
        {
            cout<<j<<" ";
        }
        cout << endl;
    }
}