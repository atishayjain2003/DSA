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
    node* first= new node(10);
    node* second= new node(20);
    node* third= new node(30);
    first->next=second;
    second->next=third;
    node* attail= new node(50);
    node* head=first;
    node* temp=head;
    node* tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next=attail;

    cout<<"The linked list is "<< endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }   

}