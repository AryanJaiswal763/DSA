#include<bits/stdc++.h>
using namespace std;

bool check(string &str,int begin,int end)
{
    if(begin>=end)
    return 1;

    if(str[begin]!=str[end])
    return 0;

    check(str,begin+1,end-1);
}

int main()
{
    string str;
    cin>>str;

    bool ans=check(str,0,str.length()-1);
    cout<<ans<<endl;
    return 0;

}