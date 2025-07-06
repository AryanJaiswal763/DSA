#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int k;
    cout<<"Enter k: ";
    cin>>k;

    vector<int>arr(n);
    cout<<"Enter array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());

    cout<<"Ans: ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    
        
    }

}