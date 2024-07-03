#include<iostream>
#include<vector>
using namespace std;

//defining the structure of node
class Node
{
    public:
    int data;
    Node* left;
    Node* right;

//defining the values of node in a tree
    Node(int val)
    {
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }


};

//defining the function to create nodes of a tree

Node* createtree()
{
    cout<<"Enter the value "<<endl;
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    Node* root= new Node(data);
    cout<<"For left subtree "<<endl;
    root->left=createtree();
    cout<<"For right subtree "<<endl;
    root->right=createtree();
    return root;
    
}











int main()
{
Node* root=createtree();
cout<<root->data<<endl;
}