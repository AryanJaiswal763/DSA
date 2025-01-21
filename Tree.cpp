#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
     Node *right;

     Node(int val)
     {
        data=val;
        left=right=NULL;
     }
};

int main()
{
    queue<Node*>q;
   int x;
   cout<<"Enter root data of tree"<<endl;                  /*               1
                                                                        2        3     
                                                                    4     5    6      7   
                                                                                                     */
   cin>>x; 
   Node *root=new Node(x);
   q.push(root);
   int L,R;
   while(!q.empty())
   {
    Node *temp=q.front();
    q.pop();
    
    cout<<"Enter left child of "<<temp->data<<" :";
    cin>>L;
    
    if(L!=-1)
    {
        temp->left=new Node(L);
        q.push(temp->left);
    }


    cout<<"Enter right child of "<<temp->data<<" :";
    cin>>R;
                                                                  
    if(R!=-1)
    {
        temp->right=new Node(R);
        q.push(temp->right);
    }
   }
   cout<<"\nYour tree has been created\n"<<endl;
   return 0;
}