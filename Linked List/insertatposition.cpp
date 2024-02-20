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
    int position=3;
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    node* head=first;
    node* temp=head;
    first->next=second;
    second->next=third;
    third->next=fourth;
    node* atposition=new node(100);
    for(int i=1; i<position; i++)
    {
        temp=temp->next;
    }
    atposition->next=temp->next;
    temp->next=atposition;
    temp=head;
    cout<<"The linked list is "<< endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}