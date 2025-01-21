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
   int a[]={2,4,6,8,10,12};
   
   Node *head=NULL;
   Node *tail;

   for(int i=0;i<6;i++)
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
   Node *te=head;
   int count=0;
   while(te)
   {
    count++;
    te=te->next;
   
   }
  cout<<"tell from where you want to rotate"<<endl;
  int ro;
  cin>>ro;

  count=count-ro;
  Node *curr=head;
  Node *pre=NULL;
  while(count--)
  {
    pre=curr;
    curr=curr->next;
  }
  pre->next=NULL;
  Node *ta=curr;
  while(ta)
  {
    ta=ta->next;
  }
  ta->next=head;
  head=curr;

  Node *temp=head;
  while(temp)
  {
    cout<<temp->data<<endl;
    temp=temp->next;
  }

 return 0;
}