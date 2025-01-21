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
   int a[]={2,4,8,10,11,12};

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
   cout<<"Before deletion"<<endl;
   Node *t=head;
   while(t)
   {
    cout<<t->data<<endl;
    t=t->next;
   }

  cout<<"Enter position from last you want to delete"<<endl;
  int n;
  cin>>n;

 int count=0;
 Node *temp=head;
 while(temp)
 {
    temp=temp->next;
    count++;
 }
 count=count-n;
 Node *pre=NULL;
    Node *curr=head;

 while(count--)
 {
    
    pre=curr;
    curr=curr->next;
 }
 pre->next=curr->next;
 delete curr;

 cout<<"After removing"<<endl;
 Node *tt=head;
 while(tt){
    cout<<tt->data<<endl;
    tt=tt->next;
 }
 return 0;
}