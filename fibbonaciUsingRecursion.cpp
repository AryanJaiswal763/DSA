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
    int n;
    cout<<"Enter number of terms to be printed: ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
    cout<<fibbonaci(i)<<" ";
    }
    
    
}