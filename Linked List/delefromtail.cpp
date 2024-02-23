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
    cout<<"linked list before deletion is "<< endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        tail=tail->next;
    }
    temp=head;
    cout<<"Linked list after deletion is "<< endl;
    while(temp->next!=tail)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    cout<<endl<< "the next of tail is "<< endl;
    cout<<tail->next;
    cout<< endl<<"The data of tail is "<<tail->data;
}