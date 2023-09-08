// counting from 1 to n in function 

#include <iostream>
using namespace std;
void count(int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<i<<endl;
    }
}
int main()
{
    int x;
    cout<<"Enter value upto which counting is to be printed ";
    cin>>x;
    count(x);

}
