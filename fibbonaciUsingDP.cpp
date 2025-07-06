#include<bits/stdc++.h>
using namespace std;

int fibbonaci(int n, vector<int>&dp)
{
    if(n==0)
    {
     dp[n]=0;
     return dp[n];
    }

    if(n==1){
    dp[n]=1;
    return dp[n];
    }

    if(dp[n]!=-1)
    return dp[n];


    dp[n]=fibbonaci(n-1,dp),fibbonaci(n-2,dp);
    
    
}
int main()
{
    int n;
    cout<<"Enter number of terms to be printed: ";
    cin>>n;

     vector<int>dp(n+1,-1);

    for(int i=0;i<n;i++)
    {
     dp[i]=fibbonaci(i, dp);
    }
    
    
}