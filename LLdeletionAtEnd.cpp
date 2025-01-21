#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
         data=value;
        next=NULL;
    }
};
int main()
{
   int a[]={2,4,8,10};

   Node *head=NULL;
   Node *tail;

   for(int i=0;i<4;i++)
   {
     if(head==NULL)
     {
        head=new Node(a[i]);
        tail=head;
     }

     else
     {
       Node *temp=new Node(a[i]);
       tail->next=temp;
       tail=temp;
     }
   }
   cout<<"Before deletion"<<endl;
   Node *t=head;
   while(t)
   {
    cout<<t->data<<endl;
    t=t->next;
   }
  
   if(head!=NULL)
   {
     if(head->next== NULL)
     {
        Node *temp=head;
        head=head->next;
        delete temp;
     }
     else
     {
         Node *pre=NULL;
   Node *curr=head;
        while(curr->next!=NULL)
        {
        pre=curr;
        curr=curr->next;
        }

     pre->next=curr->next;
     delete curr;
     }
    
     

   }
   
     cout<<"after deletion of end node"<<endl;
     Node *te=head;
     while(te)
     {
        cout<<te->data<<endl;
        te=te->next;

     }
     return 0;
}