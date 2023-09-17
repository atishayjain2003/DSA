//finding an array in 2d array
#include<iostream>
#include<vector>
using namespace std;
void find(vector<int>array)
{
    int element;
    cout<<"Enter element to be searched ";
    cin>>element;
    int i,counter=0;
    int size;
    size=array.size();
    for(i=0; i<size; i++)
    {
        if (array[i]==element)
        {
           
            counter=1;
            break;
        }
    }
    if(counter==1)
    {
        cout<<"Element is present ";
    }
    else
    {
        cout<<"Elment not present";
    }

}
int main()
{
    int rows, columns, value;
    vector<int>array3;
    cout<<"Enter size of row ";
    cin>>rows;
    cout<<"Enter size of columns";
    cin>>columns;
    int i,j;
    cout<<"Enter 2d array element ";
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            cin>>value;
            array3.push_back(value);
        }
    }
    find(array3);
}