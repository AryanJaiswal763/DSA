#include <bits/stdc++.h>
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

    Node *Head;
    Node *tail;
    Head=NULL;
    
    int x=2,m=x-1,val=30;
    for(int i=0;i<4;i++)
    {
        if(Head==NULL)
        {
            Head=new Node(a[i]);
            tail=Head;
        }
        else
        {

           Node *temp=new Node(a[i]);
           tail->next=temp;
           tail=temp;
        }
    }
 Node *temp=Head;
    while(m--)
    {
       temp=temp->next;
    }
     Node *temp2=new Node(val);
     temp2->next=temp->next;
     temp->next=temp2;


    Node *t=Head;
    while(t)
    {
        cout<<t->data<<endl;
        t=t->next;
    }

    return 0;
}