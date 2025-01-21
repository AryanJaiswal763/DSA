#include<bits/stdc++.h>
using namespace std;

void LowerToUpperCase(string &str, int end)
{
    if(end==-1)
    return;
    
    str[end]='A'+str[end]-'a';
    LowerToUpperCase(str,end-1);
}


int main()
{
    string str;
    cin>>str;

    LowerToUpperCase(str,str.length()-1);
    cout<<str<<endl;
    return 0;
}