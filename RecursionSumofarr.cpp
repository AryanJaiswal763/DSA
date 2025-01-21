#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>a, int n)
{
    if(n==0)
    return 0;
 
    return a[n-1]+sum(a,n-1);
}
int main()
{
vector<int>a;
    for(int i=0;i<5;i++)

    {
        a.push_back(i+1);
    }

    cout<<"Sum of array="<<sum(a, a.size());
    return 0;
}