#include<bits/stdc++.h>
using namespace std;

bool targetsum(vector<int>a,int start,int end,int target)
{
    if(start>end && target!=0)
    return 0;
    if(target<0)
    return 0;
    if(target==0)
    return 1;

   return  targetsum(a, start+1, end, target) || targetsum(a,start+1, end, target-a[start]) ;
}

int main()
{
    vector<int>a={2,4,1,8,7};
    cout<<targetsum(a, 0 , a.size()-1, 13);
    return 0;
}