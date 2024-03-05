#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number till which primes are to be counted ";
    cin>>n;
    vector<int>result(n,true);
    int answer=0;
    result[0]=result[1]=false;
    vector<int>primes;
    for(int i=2; i<n; i++)
    {
        if(result[i]==true)
        {
            primes.push_back(i);
            answer++;
            int j=2*i;
            while (j<n)
            {
                result[j]=false;
                j=j+i;
            }
            
        }
    }

    cout<<"Total primes till "<<n<<" are "<<answer<< endl;
    int x=primes.size();
    cout<<"The primes till "<<n<<" are "<< endl;
    for(int i=0; i<x; i++)
    {
        cout<<primes[i]<<" ";
    }

}