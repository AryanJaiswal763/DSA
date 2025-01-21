#include <bits/stdc++.h>
using namespace std;
void old()
{
    string str1,str2;
    cin>>str1>>str2;
    int min_count=0,count=0;
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]!=str2[i] && str1[i]!='?' && str2[i]!='?')
        {
            min_count++;
        }
        
        else if(str1[i]=='?' || str2[i]=='?')
        {
            count++;
        }
    }
    
    int max_count=min_count+count;
    cout<<min_count<<" "<<max_count<<endl;
}






int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        old();
    }
    return 0;
}