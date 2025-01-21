#include<bits/stdc++.h>
using namespace std;

int power(int num, int n)
{
   if(n==0)
   return 1;

   return num*power(num, n-1);
}


int main()
{
    int num;
    cout<<"Enter Number"<<endl;
    cin>>num;

    int n;
    cout<<"Enter power"<<endl;
    cin>>n;

    cout<<"Answer="<<power(num, n);
    return 0;
}
