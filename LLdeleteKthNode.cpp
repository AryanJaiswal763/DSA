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
  int k;
  cout<<"Enter k"<<endl;
  cin>>k;
  int c=1;

  Node *curr=head;
  Node *pre=NULL;

  while(curr)
  {
    
    if(c%k==0)
    {
       pre->next=curr->next;
       curr=curr->next;
       c++;
    }
    else
    {
        pre=curr;
        curr=curr->next;
        c++;
    }
  }

  Node *temp=head;
  while(temp)
  {
    cout<<temp->data<<endl;
    temp=temp->next;
  }
  return 0;

}
