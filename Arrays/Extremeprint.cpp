#include<iostream>
#include<utility>
using namespace std;
void extremeprint(int array[], int size)
{
    int i;
    int left=0; 
    int right=size-1;
    cout<<"Extreme print "<<endl;
    while(left<=right)

    {
        if(left==right)
        {
            cout<<array[left]<<" ";
        }
        else
        {
            cout<<array[left]<<" "<<array[right]<<" ";
        }
        left++;
        right--;
    }

}
int main()
{
    int array[100];
    int i;
    int size;
    cout<<"Enter size of array(less than 10) ";
    cin>>size;
    cout<<"Enter array elements ";
    for(i=0; i<size; i++)
    {
        cin>>array[i];
    }
    extremeprint(array,size);

}