//Finding subsequences using recursion
#include <iostream>
using namespace std;



void subsequence(string str, string output, int index)
{
    if(index>=str.length())
    {
        cout<<output<<endl;
        return;
    }
    char ch=str[index];
    //exclude wala case 
    subsequence(str, output, index+1);
    //include wala case
    output.push_back(ch);
    subsequence(str, output, index+1);

}

int main()
{
    string str="abc";
    string output = "";
    int index=0;
    subsequence(str, output, index);
}