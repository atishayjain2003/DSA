#include<iostream>
using namespace std;
int main()
{
    int operation;
    int a,b,answer=0;
    cout<<"Enter number for operation "<<endl<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
    cin>>operation;
    cout<<"Enter the values ";
    cin>>a>>b;
    switch(operation)
    {
        case 1:
        cout<<"The answer is "<<a+b;
        break;

        case 2:
        cout<<"The answer is "<<a-b;
        break;

        case 3:
        cout<<"The answer is "<<a*b;
        break;

        case 4:
        cout<<"The answer is "<<a/b;
        break;

        default:
        cout<<"Invalid Operation";
        
    }

}