#include <bits/stdc++.h>
using namespace std;

void s()
{
   int x,y;
   cin>>x>>y;
   
   while(x!=0)
  {
    if(x>y)
    {
        swap(x,y);
    }
    
    if(x<=y)
    {
        x=y-x;
        if(x==0)
        {
            break;
        }
        y=x;
    }
  }
  cout<<y<<endl;
}









int main() {
	// your code goes here
  int t;
  cin>>t;
  while(t--)
  {
      s();
  }
  return 0;
}
