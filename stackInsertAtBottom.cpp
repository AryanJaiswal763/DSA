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
       if(top==NULL)
       {
        cout<<"Stack Overflow"<<endl;
       }
       else
       {
        Node *temp=new Node(n);
        temp->next=top;
        top=temp;
        size++;
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
           Node *temp=top;
           top=top->next;
           delete temp;
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
    int si;
    cout<<"Enter size"<<endl;
    cin>>si;
    cout<<"\nEnter Stack elements"<<endl;

    vector<int> v;
    for(int i=0;i<si;i++)
    {
        cin>>v[i];
    }
    
    cout<<"\nStack Before"<<endl;
   for(int i=0;i<v.size();i++)
    {
        st.push(v[i]);
        int val=st.peek();
        if(st.flag==0)
        {
        cout<<val<<endl;
        }
    }
   int x;
   cout<<"\nEnter element to be inserted at bottom"<<endl;
   cin>>x;
   Stack st2;
  while(!st.IsEmpty())
  {
     st2.push(st.peek());
     st.pop();
  }
  st.push(x);
  while(!st2.IsEmpty())
  {
     st.push(st2.peek());
     st2.pop();
  }

 cout<<st.peek()<<endl;
 st.pop();
 cout<<st.peek()<<endl;
 st.pop();
 cout<<st.peek()<<endl;
 st.pop();


   return 0;
}