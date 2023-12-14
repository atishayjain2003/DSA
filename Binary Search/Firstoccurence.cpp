//Finding the first occurence of an element in a sorted array 
#include<iostream>
#include<vector>
using namespace std;
int occurence(vector<int>array, int target)
{
    int size=array.size();  
    int low=0;
    int high=size-1;
    int answer=-1;
    while(low<=high)
    {
    int mid=(low+high)/2;
        if (array[mid]==target)
        {
            answer=mid;
            low=mid-1;
        }
        else if(target>array[mid])
        {
            low=mid+1;
        }
        else if(target<array[mid])
        {
            high=mid-1;
        }
        mid=(low+high)/2;
    } 
    return answer;

}
int main()
{
    vector<int>arr={10,20,30,30,50};
    // arr={10,20,30,30,50};
    int target=30;
    int x=occurence(arr,target);
    if (x==-1)
    {
        cout<<"Element not found "<< endl;
    }
    else
    {
        cout<< "Element found at position" <<x;
    }
    
    
    
    //cout<<x;
}