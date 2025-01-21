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
    bool swapped;
    for(int i=n-2;i>=0;i--)
    {
       swapped=false;
        for(int j=0;j<=i;j++)
        {
           if(a[j]>a[j+1])
           {
            swap(a[j],a[j+1]);
            swapped=true;
           }
        }
        if(swapped==false)
        {
            break;
        }
    }
    cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}