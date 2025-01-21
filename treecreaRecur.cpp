#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

Node * BinaryTree()
{
    int x;
    cin>>x;

    if(x==-1)
    {
      return NULL;
    }

    Node *temp=new Node(x);
    //left side creation
    cout<<"Enter left child of "<<x<<": ";
    temp->left=BinaryTree();


    //right side creation
     cout<<"Enter right child of "<<x<<": ";
    temp->right=BinaryTree();

    return temp;


}

int main()
{
    cout<<"Enter root node: ";
    Node *root;
    root=BinaryTree();
    cout<<"Tree created successfully!"<<endl;
    return 0;
}