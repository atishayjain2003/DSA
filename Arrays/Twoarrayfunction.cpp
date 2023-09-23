#include<iostream>
using namespace std;
void twod(int array[10][10], int rows, int columns)
{
    cout<<"The two dimensional array elements are "<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout << endl;
    }


}
int main()
{
    int array[10][10];
    int row, column;
    cout<<"Enter number of rows (less than 10)";
    cin>>row;
    cout<<"Enter number of columns (less than 10)";
    cin>>column;
    cout<<"Enter array elements ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cin>>array[i][j];
        }
    }
    twod(array, row, column);
}