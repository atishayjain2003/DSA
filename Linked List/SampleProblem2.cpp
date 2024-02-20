#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

int main()
{
    int product=1;
    node* first=new node(2);
    node* head=first;
    node* temp=first;
    node* second=new node(3);
    node* third=new node(4);
    node* fourth=new node(5);
    first->next=second;
    second->next=third;
    third->next=fourth;
    while(temp!=NULL)
    {
        product*=temp->data;
        temp=temp->next;
    }
    cout<<"The product of the linked list is "<<product<< endl;
}