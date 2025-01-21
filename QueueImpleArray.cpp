#include<bits/stdc++.h>
using namespace std;

class Queue
{
    int *a;
    int front;
    int rear;
    int size;

   public:
    Queue(int n)
    {
        a=new int[n];
        front=-1;
        rear=-1;
        size=n;
        
    }
   bool IsEmpty()
   {
    return front%size==-1;
   }

   bool IsFull()
   {
    return rear%size==size-1;
   }

  void push(int num)
  {
    if(IsFull())
    {
        cout<<"queue overflow\n"<<endl;
        return;
    }
    else
    {
        front=rear;
        a[(rear+1)%size]=num;
        cout<<"pushed "<<num<< " into queue\n";

    }
  }

  void pop()
  {
    if(front==rear==-1)
    {
        cout<<"queue underflow"<<endl;
        return;
    }
    else if(front==rear)
    {
        cout<<"popped "<<a[front]<< " from the queue\n";
          front=rear=-1;
    }
    else
    {
         cout<<"popped "<<a[front]<< " from the queue\n";
        front=(front%size)+1;
    }


  }
  
  int start()
  {
    return a[front%size];
  }




};

int main()
{
   Queue q(5);
   q.push(23);
   q.push(24);
   q.push(25);
   q.push(26);
   q.push(27);
   q.push(10);
   q.pop();
   q.push(100);
   cout<<q.start()<<endl;
   return 0;

}