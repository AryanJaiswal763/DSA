#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>&v,int start,int  end, int mid, int k)
{
    if(start>end)
    return -1;
   
   mid=start+(end-start)/2;

   if(v[mid]==k)
   return mid;

   else if(v[mid]>k)
   BinarySearch(v,start,mid-1,mid, k);

   else
   BinarySearch(v,mid+1,end,mid, k);

}
int main()
{
    vector<int>v={1,2,3,4,5,6,7,10};
    int mid;
    int ans=BinarySearch(v, 0, v.size()-1, mid, 11Recust0 );
    cout<<ans<<endl;
    return 0;

}