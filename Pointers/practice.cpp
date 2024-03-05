#include<iostream>
using namespace std;
int main()
{
    int array[4]={10,20,30,40};
    int *ptr=array+1;
    cout<<*ptr;
    
}