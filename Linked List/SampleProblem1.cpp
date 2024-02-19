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
    node* first=new node(10);
    node* head=first;
    node* temp=first;
    node* second= new node(20);
    node* third= new node(30);
    node* fourth= new node(40);
    node* fifth= new node(50);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    int sum=0;
    while(temp!=NULL)
    {
        sum+=temp->data;
        temp=temp->next;
    }
    cout<<"The sum of linked list is "<< endl<< sum;
}