#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    int a[]={1,2,3,4,5,6,7,8,9,10};

    for(int i=0;i<10;i++)
    {
        st.push(a[i]);
    }

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}