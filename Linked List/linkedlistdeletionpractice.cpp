#include<iostream>
using namespace std;
class node
{
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
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    //delete node whose value is 20
    node* head=first;
    node* temp=head;
    node* tail=head;
    node* current= head;
    node* previous=head;
    first->next=second;
    second->next=third;
    third->next=fourth;
    while(temp->data!=20)
    {
        temp=temp->next;
    }
    current=temp;
    temp=head;
    while(temp->next!=current)
    {
        temp=temp->next;
    }
    previous=temp;
    temp=head;
    previous->next=current->next;
    current->next=NULL;
    delete current;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    

    
}