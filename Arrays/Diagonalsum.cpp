#include<iostream>
using namespace std;
void diagonal(int array[][10], int row, int column)
{
    int i,j;
    int sum=0;
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            if(i==j)
            {
                sum+=array[i][j];
            }
        }
    }
    cout<<"The sum of diagonal elements is "<<sum;
}
int main()
{
    int array[10][10];
    int i, j;
    int rows, columns;
    cout<<"Enter number of rows ";
    cin>>rows;
    cout<<"Enter number of columns ";
    cin>>columns;
    cout<<"Enter elements ";
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"The entered array elements are "<<endl;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout << endl;
    }
    diagonal(array, rows, columns);
}