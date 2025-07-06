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
     Node *Head=NULL;
     Node *tail;
     vector<int>arr={1,2,3,4};


     for(int i=0;i<4;i++)
     {
         if(Head==NULL)
         {
            Head=new Node(arr[i]);
            tail=Head;
         }

         else
         {
             tail->next=new Node(arr[i]);
             tail=tail->next;
         }
     }
    
      int ele;
      cout<<"Enter element to insert: ";
      cin>>ele;
      
       Node *newNode=new Node(ele);

     int pos;
     cout<<"Enter position to insert: ";
     cin>>pos;
     

     cout<<"Before"<<endl;
     Node *t1=Head;
     while(t1!=NULL)
     {
         cout<<t1->data<<" ";
         t1=t1->next;
     }

    
       cout<<"\nAfter"<<endl;
       Node *temp=NULL;
       pos=pos-1;


       if(pos==0)
       {
          newNode->next=Head;
          Head=newNode;
       }

       else{

       while(pos--)
       {
          if(temp==NULL)
          {
          temp=Head;
          }
          else
          temp=temp->next;
       }

       newNode->next=temp->next;

       temp->next=newNode;

       }

       //printing
      Node *t2=Head;
     while(t2!=NULL)
     {
         cout<<t2->data<<"->";
         t2=t2->next;
     }


     int pos1;
     cout<<"Enter position to delete: ";
     cin>>pos1;
 
      pos1=pos1-1;

     Node *temp1=Head;
     Node *temp2=NULL;

    if(pos1==0)
    {
        Head=temp1->next;
        delete temp1;
    }

    else{

        while(pos1--)
        {
            if(temp2==NULL)
            {
                
                temp2=temp1;
                temp1=temp1->next;
            }

            else
            {
               temp2=temp2->next;
               temp1=temp1->next;
            }
        }
    }

     delete temp2;

      //printing
     Node *t9=Head;
     while(t9!=NULL)
     {
         cout<<t9->data<<"->";
         t9=t9->next;
     }
    
}