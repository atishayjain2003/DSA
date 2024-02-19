//count the number of even and odd nodes
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
    node* first= new node(1);
    node* head = first;
    node* temp=first;
    node* second= new node(2);
    node* third= new node(3);
    node* fourth= new node(4);
    node* fifth= new node(5);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    int even=0;
    int counter=0;
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            even++;
            counter++;
            temp=temp->next;
        }
        else{
            counter++;
            temp=temp->next;
        }
    }
    cout<<"The even nodes are "<<even<< endl;
    cout<<"The odd nodes are "<<counter-even<<endl;

}