#include<iostream>
using namespace std;
void findtarget(int array[][4], int row, int column, int target)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            if(array[i][j]==target)
            {
                
                cout<<"Element found";
                break;
            }
        }
    }
}
int main()
{
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int target=11;
    int row=3;
    int column=4;
    findtarget(arr, row, column, target);
}