#include<iostream>
#include<vector>
using namespace std;
int main(){


/*vector< vector<int> > array(5, vector<int>(10,0));
int  i;
for(int i=0; i<array.size(); i++)
{
    for(int j=0; j<array[i].size(); j++)
    {
        cout<<array[i][j]<<" ";
    }
    cout << endl;
}
*/
vector<vector <int> > brr;
vector<int>atishay(10,3);
brr.push_back(atishay);
for(int i=0; i<brr.size(); i++)
{
    for(int j=0; j<brr[i].size(); j++)
    {
        cout<<brr[i][j]<<" ";
    }
    cout << endl;

}
}