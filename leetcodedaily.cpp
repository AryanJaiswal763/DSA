// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin>>s;
    int n=s.length();
        // if(n<3)
        // return s;

        for(int i=0;i<n-2;i++)
        {
            if(s[i]==s[i+1] && s[i]==s[i+2])
            {
                s[i]='#';
            }
        }
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!='#')
            {
                ans+=s[i];
            }
            
        }
        cout<<ans;
        return 0;
}