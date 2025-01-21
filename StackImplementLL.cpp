#include<bits/stdc++.h>
using namespace std;

class Node
{
     public:
    int data;
    Node *next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

class Stack
{
   
    Node *top;
    int size;
    public:
    bool flag=1;
    Stack()
    {
        top=NULL;
       size=0;
    }

    void push(int n)
    {
        Node *temp=new Node(n);
        if(temp==NULL)
        {
            cout<<"Stack Ovewewrflow"<<endl;
        }
        else{
        temp->next = top;
        top=temp;
        size++;
        cout<<"Pushed "<<n<<" into the stack"<<endl;
        flag=0;
        }
    }

    void pop()
    {
        if(top==NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }

        else
        {
            Node *te=top;
            top=top->next;
          
            cout<<"Popped "<<te->data<<" from the stack"<<endl;
             delete te;
             size--;
             if(top==NULL)
             {
                flag=1;
             }
        }
    }

    int peek()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
            
        }
        else
        {
            return top->data;
        }
    }
    bool IsEmpty()
    {
        return top==NULL;
    }

    int IsSize()
    {
        return size;
    }



};

int main()
{
    Stack st;
    // st.push(4);
    // st.push(5);
    // st.push(7);
    // st.pop();
    // cout<<st.peek()<<endl;
    // cout<<st.IsEmpty()<<endl;
    // cout<<st.IsSize()<<endl;
    st.push(-1);
    st.pop();
    int v=st.peek();
    if(st.flag==0)
    {
        cout<<v<<endl;
    }
    return 0;
}