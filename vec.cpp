#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
   vector<int> a;
  
       a.push_back(1);
       a.push_back(2);
       a.push_back(1);
   
   for(int i=0;i<3;i++)
   {
       cout<<a[i]<<endl;
   }
   int sum=0;
 for(int i=0;i<3;i++)
   {
    sum=sum+a[i]*pow(10,i);
    cout<<sum<<endl;
       
   }
          cout<<sum<<endl;
         // cout<<pow(10,0)<<endl;

    return 0;
}