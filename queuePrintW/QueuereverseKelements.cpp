#include<bits/stdc++.h>
using namespace std;

int main()
{
         queue<int> q;
         stack<int> s;
         vector<int> a;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(10);

    int k;
    cin>>k;

    while(k--)
    {
        s.push(q.front());
        q.pop();
    }

    while(!q.empty())
    {
        a.push_back(q.front());
        q.pop();
    }

    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<a.size();i++)
    {
        q.push(a[i]);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;

}