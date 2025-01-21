#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    if(q.empty())
    {
        cout<<"empty"<<endl;
    }
    else{
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();
        }
    }
    return 0;
}