#include <bits/stdc++.h>
using namespace std;

void match()
{
   int n,c=0,d=1;
   cin>>n;

   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }

  for(int i=0;i<n-1;i++)
  {
      if(a[i+1]>a[i])
      {
        c++;
        d=max(d,c);
      }
      else{
        c=1;
      }
  }

  cout<<d<<endl;

}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        match();
    }

    return 0;
}