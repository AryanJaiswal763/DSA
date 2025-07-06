#include<bits/stdc++.h>
using namespace std;

class MaxHeap
{
   int* arr;
   int size;
   int total_size;

   public:

   MaxHeap(int n)
   {
    arr=new int[n];
    size=0;
    total_size=n;
   }
 
   void insert(int val)
   {
     if(size==total_size)
     {
        cout<<"Heap Overflow"<<endl;
        return;
     }

      arr[size]=val;
      int index=size;
      size++;

      while(index>0 && arr[index]>arr[(index-1)/2])
      {
          swap(arr[index], arr[(index-1)/2]);
          index=(index-1)/2;
      }
   }

  void Heapify(int index)
  {
      int largest=index;
      int left=2*index+1;
      int right=2*index+2;

      if(left<size && arr[left]>arr[largest])
      largest=left;
      if(right<size && arr[right]>arr[largest])
      largest=right;

      if(largest!=index)
      {
        swap(arr[largest],arr[index]);
        Heapify(largest);
      }

  }

    void Delete()
    {
        if(size==0)
        {
            cout<<"Heap Underflow"<<endl;
            return;
        }
       
        cout<<arr[0]<<" "<<"is deleted"<<"\n";
        arr[0]=arr[size-1];
        size--;
        
        if(size==0)
        return;

        Heapify(0);
    }


   void print()
   {
     for(int i=0;i<size;i++)
     {
        cout<<arr[i]<<" ";
     }
   }

};

int main()
{
    MaxHeap H(10);
    H.insert(12);
    H.insert(19);
    H.insert(31);
    H.insert(18);
    H.insert(32);
    H.insert(20);
    H.insert(40);
    H.insert(15);
    H.insert(17);
    H.insert(13);
    H.Delete();
    H.print();

    return 0;
}
 