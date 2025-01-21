#include<iostream>
#include<stack>
#include<bits/stdc++.h>

using namespace std;

class Stack
{
    int *a;
    int size;
    int top;
    
   public:
   bool flag;
    Stack(int s)
    {
      size=s;
      a=new int[s];
      top=-1;
      flag=1;
    }

    void push(int val)
    {
        if(top==size-1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else
       {
         top++;
         a[top]=val;
         cout<<"Pushed "<<val<<" into stack"<<endl;
         flag=0;
       }
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            top--;
            cout<<"Popped "<<a[top+1]<<" from the stack"<<endl;
            if(top==-1)
            {
                flag=1;
            }
        }
    }
    int peek()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
        return a[top];
        }
    }
    bool IsEmpty()
    {
        return top==-1;
    }

    int IsSize()
    {
        return top+1;
    }
};

int main()
{
    Stack st(5);
    // st.push(5);
    // st.push(6);
    // st.push(90);
    // cout<<st.peek()<<endl;
    // st.pop();
    // cout<<st.peek()<<endl;
    // cout<<st.IsEmpty()<<endl;
    // cout<<st.IsSize()<<endl;
    // st.pop();
    // st.pop();
    // st.pop();
    // cout<<st.IsEmpty()<<endl;
    st.push(-1);
    st.pop();
   
   int value=st.peek();
   if(st.flag==0)
   {
       cout<<value<<endl;
   }


    return 0;
}