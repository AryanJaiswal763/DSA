#include<bits/stdc++.h>
using namespace std;
void display(queue<int>q)
{

    while(!q.empty())
    {
      cout<<q.front()<<" ";
      q.pop();
    }

}
int main()
{
    queue<int>q;
    vector<int>a;
    a.push_back(3);
    a.push_back(24);
    a.push_back(4);
    a.push_back(80);
    a.push_back(94);
    a.push_back(1);    // 3   24   4   80   94   1

     cout<<"Enter window size"<<endl;
    int k;
    cin>>k;

    for(int i=0;i<k-1;i++)
    {
        q.push(a[i]);
    }

    for(int i=k-1;i<6;i++)
    {
        q.push(a[i]);
        display(q);
        q.pop();
        cout<<"\n";
    }
    return 0;
}