#include<bits/stdc++.h>
using namespace std;


class node{
public:
int data;
node* next;
node* prev;
node(int val)
{
    data=val;
    next=NULL;
    prev=NULL;
}
};
class doublyLL{
public:
node* head=NULL;
void insert_end(int data)
{
    node* new_node=new node(data);
    if(head==NULL)
    head=new_node;
    else
    {
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        new_node->prev=temp;
        temp->next=new_node;

    }
}
void insert_beging(int data)
{
    node* new_node=new node(data);
    if(head==NULL)
    head=new_node;
    else
    {
        new_node->next=head;
        head->prev=new_node;
        head=new_node;

    }
}
void insert_pos(int index,int data)
{
    if(index==0)
    insert_beging(data);
    else
    {
        node* new_node=new node(data);
        node* temp=head;
        for(int i=0;i<index-1;i++)
         {
             temp=temp->next;
             if(temp==NULL)
             {
                 cout<<"Invalid index"<<endl;
                 return;
             }
         }
         new_node->prev=temp;
         new_node->next=temp->next;
         (temp->next)->prev=new_node;
         temp->next=new_node;

    }
    
}
void print()
{
    if(head==NULL)
    cout<<"No elements is linked list"<<endl;
    else{
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
}
};
int main()
{
    doublyLL list;
    list.insert_end(20);
    list.insert_end(30);
    list.insert_end(40);
    list.insert_end(50);
    list.insert_end(60);
    list.insert_end(70);
    list.insert_beging(59);
    list.insert_pos(2,79);
    list.print();
}
