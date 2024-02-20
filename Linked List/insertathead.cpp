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
    node* head=first;
    node* temp=head;
    first->next=second;
    second->next=third;
    node* athead=new node(50);
    athead->next=head;
    head=athead;
    temp=head;
    cout<<"The linked list after insertion at head is "<< endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }


    

}