#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of elements"<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter sorted elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    int tar;
    cout<<"Enter target"<<endl;
    cin>>tar;
    int start=0,end=n-1,mid,ind=-1;
    while(start<=end)
    {
        mid= (start+end)/2;

        if(a[mid]==tar)
        {
            ind=mid;
            break;
        }
        else if(a[mid]>tar)
        {
             end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<"Element found at location: "<<ind; 
    return 0;
}