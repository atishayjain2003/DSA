#include<iostream>
#include<utility>
using namespace std;
void reverse(int array[], int size)
{
    int i;
    int left=0; 
    int right=size-1;
    while(left<right)
    {
        swap(array[left],array[right]);
        left++;
        right--;
    }
    cout<<"The reversed array is ";
    for(i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
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
    reverse(array,size);

}