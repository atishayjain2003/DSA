#include <iostream>
using namespace std;
int main()
{
    int rows, columns, i, j;
    int array[100][100];
    cout<<"Enter number of rows(Less than 10) ";
    cin>>rows;
    cout<<"Enter number of columns(Less than 10) ";
    cin>>columns;
    cout<<"Enter array elements ";
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"The elements stored in 2d array are "<< endl;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout << endl;
    }

}