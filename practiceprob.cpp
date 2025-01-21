#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int n) {
      int r;  
      int x=n;
      vector<int> ans;
        if(x<0)
        {
            return false;
        }
        else
        {
           r=n%10;
           ans.push_back(r);
           n=n-r;
           n=n/10;
        }
        int sum=0;
        int si=ans.size();
        for(int i=0;i<si-1;i++)
        {
            cout<<ans[i]<<endl;
           sum=sum+ans[i]*pow(10,i);
        }
        if(sum==x)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
int main()
{
    int x;
    cin>>x;

  bool result=isPalindrome(x);
   cout<<result<<endl;
      
    return 0;
}