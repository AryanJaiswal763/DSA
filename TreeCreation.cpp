#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left,*right;

    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

int main()
{
    queue<Node*>q;

    cout<<"Enter root node: ";
    int x;
    cin>>x;

    Node *root=new Node(x);
    q.push(root);

    int first,second;
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();

        //left child
        cout<<"Enter left child of "<<temp->data<<": ";
        cin>>first;
        if(first!=-1)
        {
            temp->left=new Node(first);
            q.push(temp->left);
        }

        
        //right child
        cout<<"Enter right child of "<<temp->data<<": ";
        cin>>second;
        if(second!=-1)
        {
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }
    cout<<"Tree created successfully!"<<endl;
    return 0;
}
