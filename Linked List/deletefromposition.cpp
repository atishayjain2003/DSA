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
    int count=1;
    int position=3;
    //assuming there exists atleast one node
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    node* head=first;
    node* temp=head;
    node* tail=head;
    node* current=head;
    node* previous=head;
    node* currentnext=head;
    first->next=second;
    second->next=third;
    third->next=fourth;
    //delete at position 3

    for(int i=1; i<position; i++)
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