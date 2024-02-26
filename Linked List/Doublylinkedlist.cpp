#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* previous;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->previous=NULL;
    }
};

int main()
{
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    first->next=second;
    second->previous=first;
    second->next=third;
    third->previous=second;
    node* head=first;
    node* temp=head;

    /*while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    //for understanding
    //cout<<second->next<< endl;
    //cout<<third->previous<< endl;
    //cout<<first->next;
    */


   //insert at head

   node* athead=new node(45);
   athead->next=head;
   //previous bhi add karna padhega 
   head=athead;
   temp=athead;
   node* tail=head;
   
    // insert at tail 

    node* insertattail=new node(90);
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=insertattail;
    insertattail->previous=temp;
    temp=head;
    int counter=0;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        counter++;
    }

    cout<< endl<<"Length of linked list is "<<counter;
//pro tip: next and previous connections karne dhyaan rakhna 








}