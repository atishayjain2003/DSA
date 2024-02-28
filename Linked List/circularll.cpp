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
    node* head=first;
    node* temp=head;
    node* tail=head;
    first->next=second;
    second->next=third;
    third->next=first;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    tail=temp;

    cout<< endl<<tail->data<<" ";

}