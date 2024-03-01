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
    //delete from tail
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    first->next=second;
    second->next=third;
    node* head=first;
    node* temp=head;
    node* tail=temp;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    tail=temp;
    temp=head;
    node* prev=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    prev=temp;
    temp=head;
    
    prev->next=NULL;
    delete tail;
    tail=prev;
    cout<<"The linked list is "<< endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}