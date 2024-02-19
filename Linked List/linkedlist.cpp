#include<iostream>
#include<vector>
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
    int counter=0;
    node* first= new node(10);
    node* head= first;
    node * temp=first;
    node* second= new node(20);
    node* third= new node(30);
    first->next=second;
    second->next=third;
   node* insert=new node(50);
//to be inserted at end
   insert->next=head;
   head=insert;
   temp=insert;
   while(temp!=NULL)
   {
    temp=temp->next;
    counter++;
   }
   cout<<"The total nodes in the list are "<<counter;
  
   
   
    
}