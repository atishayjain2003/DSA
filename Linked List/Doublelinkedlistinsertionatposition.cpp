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
    node* fourth= new node(40);
    node* fifth= new node(50);
    first->next=second;
    second->next=fourth;
    fourth->next=fifth;
    second->prev=first;
    fourth->prev=second;
    fifth->prev=fourth;
    node* head=first;
    node* temp=head;
    int counter=0;
    while(temp!=NULL)
    {
        counter++;
        temp=temp->next;
    }
    temp=head;
    node* third=new node(30);
    node* previousnode=head;
    node* currentnode=head;
    int position=3;
    if(position<counter)
    {
        for(int i=1; i<position; i++)
        {
            temp=temp->next;
        }
        currentnode=temp;
        temp=head;
        while(temp->next!=currentnode)
        {
            temp=temp->next;
        }
        previousnode=temp;
        temp=head;
        previousnode->next=third;
        third->next=currentnode;
        third->prev=previousnode;
        currentnode->prev=third;
        cout<<"The linked list after insertion at position "<<position<<" is "<< endl;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    else
    {
        cout<<"Insertion at the specified position is not possible";
    }
}