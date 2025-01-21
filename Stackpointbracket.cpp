#include<bits/stdc++.h>
using namespace std;


int main()
{
     vector<int> ans;
    int L,count=0;
    cout<<"enter Length"<<endl;
    cin>>L;

    cout<<"Enter string"<<endl;

    
    vector<char> s(L);
    for(int i=0;i<L;i++)
    {
      cin>>s[i];
    }

   stack<int> st;
    for(int i=0;i<L;i++)
    {
      
      if(s[i]=='(')
      {
        count++;
        st.push(count);
        ans.push_back(count);
      }
       if(s[i]==')')
      {
         ans.push_back(st.top());
         st.pop();
      }

    }
    cout<<"answer"<<endl;
    
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

   return 0;
}