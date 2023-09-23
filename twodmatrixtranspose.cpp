//APPROACH 1 FOR TRANSPOSE OF A 2 D MATRIX
#include<iostream>
using namespace std;
void transpose(int array[10][10], int rows, int columns)
{
    int final[10][10]; 
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            final[i][j]=array[j][i];
        }
    }
    cout<<"The transposed matrix is "<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<final[i][j]<<" ";
        }
        cout << endl;
    }

}
int main()
{
    int row, column;
    int matrix[10][10];
    cout<<"Enter rows";
    cin>>row;
    cout<<"Enter columns";
    cin>>column;
    cout<<"Enter array elements ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"The matrix before transpose is "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout << endl;
    }


    transpose(matrix, row,column);
}