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
    node* first= new node(10);
    node* second=new node(20);
    node* third= new node(30);
    node* fourth= new node(40);
    first->next=second;
    second->next=third;
    third->next=fourth;
    second->prev=first;
    third->prev=second;
    fourth->prev=third;
    node* head=first;
    node* temp=head;
    //delete from head
    head=temp->next;
    temp->next=NULL;
    delete temp;
    head->prev=NULL;
    temp=head;
   /* while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    */
    
    node* tail=head;
    node* previous=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
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
    tail->prev=NULL;
    delete tail;
    tail=previous;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;


    }
    




}