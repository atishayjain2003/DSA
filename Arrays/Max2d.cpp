//finding maximum in an array using function
#include<iostream>
using namespace std;
void max(int array[][20], int rows, int columns)
{
    int i,j, max=array[0][0];
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            if(array[i][j]>max)
            {
                max=array[i][j];
            }
        }
    }
    cout<<"The maximum value in the 2d array is "<<endl<<max;
}
int main()
{
    int dimension[20][20];
    int row, column;
    cout<<"Enter rows(Less than 10) ";
    cin>>row;
    cout<<"Enter columns (Less than 10) ";
    cin>>column;
    int i,j;
    cout<<"Enter array elements ";
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            cin>>dimension[i][j];
        }
    }
    max(dimension, row, column);
    
}
