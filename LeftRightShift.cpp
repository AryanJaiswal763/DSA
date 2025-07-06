#include <bits/stdc++.h>
using namespace std;
// abcd-> bcda  left shift
// bcda-> abcd -> dabc right shift
int main()
{
   string s;
   cin>>s;

   int leftShift, rightShift;
   cin>>leftShift>>rightShift;

   queue<char>q;

    for(int i=0; i<s.length(); i++)
    {
        q.push(s[i]);
    }

    while(leftShift--)
    {
        q.push(q.front());
        q.pop();
    }
   
    string s2="";
    while(!q.empty())
    {
       s2=s2+q.front();
       q.pop();
    }
 
    while(rightShift--)
    {
        char lastChar = s2.back();
        s2.pop_back();
        s2 = lastChar + s2;
    }

     cout<<s2<<endl;
 
}
