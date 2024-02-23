#include<iostream>
using namespace std;
class node{
    public:
    char data;
    node* next;

    node(char data)
    {
        this->data=data;
        this->next=NULL;
    }
};

int main()
{
    node* first=new node('a');
    node* second=new node('t');
    node* third=new node('i');
    node* fourth=new node('s');
    node* fifth=new node('h');
    node* sixth=new node('a');
    node* seventh=new node('y');
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    node* head=first;
    node* temp=head;
    string result=" ";
    cout<<"The name in the linked list is "<< endl;
    while(temp!=NULL)
    {
        result+=temp->data;
        temp=temp->next;
    }
    cout<<result;
    
    
    
    
}