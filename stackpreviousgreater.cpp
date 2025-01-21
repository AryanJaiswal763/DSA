#include<bits/stdc++.h>
using namespace std;

int main()
{
 
    int n;
    cin>>n;
  stack<int> st;
    vector<int> a(n);
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

   for(int i=n-1;i>=0;i--)
   {
    while(!st.empty() && a[st.top()]> a[i])
    {
       ans[st.top()]=a[i];
       st.pop();
    }
    st.push(i);
   }

  while(!st.empty())
  {
    ans[st.top()]=-1;
  }
  for(int i=0;i<n;i++)
  {
    cout<<ans[i]<<endl;
  }



return 0;
}

