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
    node* head=first;
    node* temp=first;
    node* tail=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    cout<<"The linked list before deletion is "<< endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    temp=head;
    cout<<"The linked list after deletion is "<< endl;
    head=head->next;
    temp->next=NULL;
    delete temp;
    temp=head;
    tail=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<< endl<<"Deletion from head is now successfull ";
}