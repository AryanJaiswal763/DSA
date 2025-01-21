#include<bits/stdc++.h>
using namespace std;

int targetsum(vector<int>a,int target, int start, int end)
{
   if(target==0)
   return 1;

   if(start>end)
   return 0;

   if(target<0)
   return 0;

   return targetsum(a, target, start+1, end)+ targetsum(a, target-a[start], start, end);
}

int main()
{
    vector<int>a={2,3,4};
    cout<<targetsum(a, 6, 0, a.size()-1);
    return 0;
}