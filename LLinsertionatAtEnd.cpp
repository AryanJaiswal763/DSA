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
    while(temp)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    return 0;
}