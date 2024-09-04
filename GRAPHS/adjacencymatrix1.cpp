//for directed graph
#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int nodes;
    cout<<"Enter number of nodes ";
    cin>>nodes;
    int matrix[nodes+1][nodes+1]={0};
    for(int i=1; i<nodes+1; i++)
    {
        int source;
        int destination; 
        cout<<"Enter source and destination ";
        cin>>source>>destination ;
        matrix[source][destination]=1;
        //matrix[destination][source]=1;
        
    }

    for(int i=1; i<nodes+1; i++)
    {
        for(int j=1; j<nodes+1; j++)
        {
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}