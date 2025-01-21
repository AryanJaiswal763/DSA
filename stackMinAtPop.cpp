#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter length"<<endl;
    cin>>n;


    int a[n];
    cout<<"Enter array"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }

    stack<int> st;
    st.push(a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i]<st.top())
        {
            st.push(a[i]);
        }
        else
        {
            st.push(st.top());
        }
    }
    vector<int>ans;
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
   cout<<"ans"<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;

}