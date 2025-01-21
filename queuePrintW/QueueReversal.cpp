#include<bits/stdc++.h>
using namespace std;

int main()
{
         queue<int> q;
         stack<int> s;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    int n=q.size();
    while(n--)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    return 0;
}