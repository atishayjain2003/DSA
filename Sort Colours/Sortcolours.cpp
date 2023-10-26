//Sorting colours leetcode problem using 2 pointer approach (There are only 0, 1, 2 in array)
#include<iostream>
#include <vector>
using namespace std;
void sortcolors(vector <int> nums)
{
    int size=nums.size();
    int i=0;
    int a=0; int b=0; int c=0;
    for(i=0; i<size; i++)
    {
        if(nums[i]==0)
        {
            a++;

        }
        else if(nums[i]==1)
        {
            b++;
        }
        else{
            c++;
        }
        

    }
    //cout<<"The total zeroes are "<< a << endl;
    //cout<<"The total ones are "<< b <<endl;
    //cout<<"The total two's are "<< c;
    int k=0;
    for(k=0; k<a; k++)
    {
        nums[k]=0;
    }
    for(k=a; k<(a+b); k++)
    {
        nums[k]=1;
    }
    for(k=(a+b); k<size; k++)
    {
        nums[k]=2;
    }
    cout<<"The sorted array is "<< endl;
    for(k=0; k<size; k++)
    {
        cout<<nums[k]<<" ";
    }
}

int main()
{
    vector<int>array;
    cout<<"Enter number of elements to be inserted ";
    int usersize;
    cin>>usersize;
    int x=0;
    int value;
    for(x=0; x<usersize; x++)
    {
        cout<<"Enter value ";
        cin>>value;
        array.push_back(value);
    }
    sortcolors(array);

}