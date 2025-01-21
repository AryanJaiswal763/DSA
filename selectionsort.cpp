#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int ind;
    for(int i=0;i<n-1;i++)
    {
        ind=i;
        for(int j=i+1;j<n;j++)
        {
           if(a[j]<a[ind])
           {
            ind=j;
           }
        }
        swap(a[i],a[ind]);
    }
    cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}