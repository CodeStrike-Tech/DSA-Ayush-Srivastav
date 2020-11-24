#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
class linked_list{
    public:
    node* head=NULL;
    void insert_end(int data)
    {
        node* n=new  node(data);
       if(head==NULL)
          head=n;
          else
          {
             node* temp=head;
             while(temp->next!=NULL)
              {
                  temp=temp->next;
              }
              temp->next=n;
          }
    }
    void insert_beg(int data)
    {
        node* n=new node(data);
        if(head==NULL)
        head=n;
        else
        {
            n->next=head;
            head=n;
        }
        
    }
    void inser_middle(int index,int data)
    {
        node* n=new node(data);
        if(index==0)
        {
            n->next=head;
            head=n;
        }
        else
        {
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
            n->next=temp->next;
            temp->next=n;

        }
    }
    void remove_start()
    {
        head=head->next;
    }
      void print()
      {
          node* temp=head;
          if(head==NULL)
          cout<<"No element present in linked list"<<endl;
          else{
          while (temp->next!=NULL)
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
    linked_list li;
    li.insert_end(45);
    li.insert_end(23);
    li.insert_end(21);
    li.insert_beg(99);
    li.inser_middle(2,100);
    li.remove_start();
    li.print();
    return 0;
}