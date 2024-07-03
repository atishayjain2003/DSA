#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
vector<int>result;
Node* createtree()
{
    cout<<"Enter the root value "<<endl;
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    Node* root=new Node(data);
    result.push_back(data);
    cout<<"Enter the value for left subtree "<<endl;
    root->left=createtree();
    cout<<"Enter the value for right subtree "<<endl;
    root->right=createtree();

}


int main()
{
    Node* root=createtree();
    int x=result.size();
    for(int i=0; i<x; i++)
    {
        cout<<result[i]<<endl;
    }
}