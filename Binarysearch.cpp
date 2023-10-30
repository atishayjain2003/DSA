//Binary search vector
#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> array, int target)
{
    int n=array.size();
    int low=0; 
    int high=n-1;
    int mid=(low +high)/2;
    int counter=1;
    while(low<=high)
    {
        if (target==array[mid])
        {
            return mid;
            break;
            counter=0;
        }
        else if(target>array[mid])
        {
            low=mid+1;
        }
        else if (target<array[mid]){
            high=mid-1;
        }
        
       mid=(low+high)/2;
       
       
    }
    return -1;
    
}
int main()
{
    vector<int> array1;
    int size;
    cout<<"Enter number of elements to be stored in array";
    cin>>size;
    cout<<"Enter array elements ";
    for(int i=0; i<size; i++)
    {
         int value;
         cin>>value;
         array1.push_back(value);
    }
    int target;
    cout<<"Enter target element"<< endl;
    cin>>target;
    int x= binarysearch(array1, target);
    //cout<<x;
    if (x==-1)
    {
        cout<<"Element not found ";

    }
    else{
        cout<<"Element found";
    }
}