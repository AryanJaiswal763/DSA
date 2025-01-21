#include<bits/stdc++.h>
using namespace std;

int main()
{

    int binary;
    cin>>binary;
 
    int decimal=0;
   int power=0;
    while(binary>0)
    {
       int lastdigit= binary%10;
       decimal=decimal+ (lastdigit*pow(2,power));
       binary=binary/10;
       power++;
    }

  cout<<"decimal="<<decimal<<endl;
    return 0;

}