#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>array)
{
    int size=array.size();
    cout<<"There are"<<size<<"Elements in the array";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
}
int main()
{
    vector<int>atishay;
    atishay.push_back(07);
    atishay.push_back(04);
    atishay.push_back(2003);
    print(atishay);


}