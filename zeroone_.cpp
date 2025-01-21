#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,checkin,carry;
    cin>>a>>b>>c>>checkin>>carry;
    
    // if(a<=carry || b<=carry || c<=carry)
    // {
    //     cout<<"YES"<<endl;
    // }
    // else if(a>carry && b>carry && c>carry)
    // {
    //     cout<<"NO"<<endl;
    // }
   int y= min(a,b);
   
   int z=min(y,c);
   cout<<z<<endl;
}





















