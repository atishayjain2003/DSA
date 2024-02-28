#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* prev;
    node* next;

    node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

int main()
{
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    first->next=second;
    second->next=third;
    third->next=fourth;
    second->prev=first;
    third->prev=second;
    fourth->prev=third;
    node* head=first;
    node* temp=head;
    node* current=head;
    node* previous=head;
    node* tail=head;
    //delete node whose value is 30
    while(temp->data!=30)
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
    current->next->prev=previous;
    current->next=NULL;
    current->prev=NULL;
    delete current;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}