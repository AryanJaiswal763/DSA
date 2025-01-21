#include<bits/stdc++.h>
using namespace std;
int LinearSearch(vector<int>&v, int k, int end)
{
    if(end==-1)
    return -1;

    if(v[end]==k)
    return end;

    LinearSearch(v,k,end-1);
}


int main()
{
    vector<int>v={1,2,3,4,5,6,7,10};
    int ans=LinearSearch(v, 0, v.size()-1);
    cout<<ans<<endl;
    return 0;
}