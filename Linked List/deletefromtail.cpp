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
    node* first= new node(10);
    node* second= new node(20);
    node* third= new node(30);
    node* fourth= new node(40);
    int value;
    first->next=second;
    second->next=third;
    third->next=fourth;
    node* head=first;
    node* temp=head;
    node* tail=head;
    node* previous=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        value=temp->data;
    }
    tail=temp;
    temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    previous=temp;
    temp=head;
    previous->next=NULL;
    delete tail;
    tail=previous;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}