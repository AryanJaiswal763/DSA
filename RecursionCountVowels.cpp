#include<bits/stdc++.h>
using namespace std;

int countvowels(string &str,int end)
{
    if(end==-1)
    return 0;
    
    if(str[end]=='a'||str[end]=='e'||str[end]=='i'||str[end]=='o'||str[end]=='u')
    return 1+countvowels(str,end-1);

    else
    return countvowels(str,end-1);
}

int main()
{
    string str;
    cin>>str;

    int ans=countvowels(str,str.length()-1);
    cout<<ans<<endl;
    return 0;

}