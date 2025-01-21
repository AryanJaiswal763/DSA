#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int ind;
    for(int i=1;i<n;i++)
    {
        
        for(int j=i;j>0;j--)
        {
            if(a[j-1]>a[j])
            {
               swap(a[j],a[j-1]);
            }
        }
    
    }
    cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}