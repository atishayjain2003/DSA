#include<iostream>
using namespace std;
int main()
{
    int i, array[5], target,x;
    int counter=0;
    cout<<"Enter array inputs";
    for(i=0; i<5; i++)
    {
        cin>>array[i];
    }
    cout<<"Enter element to be searched ";
    cin>>target;
    for(i=0; i<5; i++)
    {
        if(target==array[i])
        {
            //STATEMENT FLOW IS VERY VERY IMPORTANT IN C++ 
            //EVERY EXECUTION NEEDS TO BE IN PARTICULAR ORDER
            counter=1;
            x=i;
            break;

        }
    }
    if (counter==1)
    {
      cout<<"Element found at index "<<x;
    }
    else
    {
        cout<<"Element not found";
    }
}