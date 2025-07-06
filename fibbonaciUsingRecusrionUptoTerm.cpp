#include<bits/stdc++.h>
using namespace std;

int fibbonaci(int n)
{
    if(n==0)
    return 0;

    if(n==1)
    return 1;

    return fibbonaci(n-1)+fibbonaci(n-2);
    
}
int main()
{
    int limit;
    cout<<"\nEnter limit: ";
    cin>>limit;
    int i=0;
    
      cout<<"\nAnswer: ";
       while(fibbonaci(i)<=limit)
       {
          cout<<fibbonaci(i)<<" ";
          i++;
       }
    
    
}