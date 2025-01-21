#include<bits/stdc++.h>
using namespace std;
void rev(string &str,int begin, int end)
{

    if(begin>=end)
    return;
    
    char c=str[begin];
    str[begin]=str[end];
    str[end]=c;

    rev(str,begin+1,end-1);
}

int main()
{
    string str;
    cin>>str;

    rev(str,0,str.length()-1);
    cout<<str<<endl;
    return 0;

}