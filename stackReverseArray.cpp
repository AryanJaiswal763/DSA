#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    vector<char> v;
    v.push_back('h');
    v.push_back('e');
    v.push_back('l');
    v.push_back('l');
    v.push_back('o');

    cout<<"Before Reversing"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    for(int i=0;i<v.size();i++)
    {
        st.push(v[i]);
    }
    int i=0;
    while(!st.empty())
    {
          v[i]=st.top();
          st.pop();
          i++;
    }
    cout<<"\nAfter Reversing"<<endl;
     for(int i=0;i<v.size();i++)
     {
    cout<<v[i]<<" ";
     }
     return 0;
}