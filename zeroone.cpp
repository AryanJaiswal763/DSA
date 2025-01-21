#include <bits/stdc++.h>
using namespace std;
void  zeroOne()
{
    int L,count0=0,count1=0;
    // cin>>L;
    // int arr[L];
    // for(int i=0;i<L;i++)
    // {
    //     cin>>arr[i];
    // }
    string arr;
    cin>>arr;
    for(int i=0;i<arr.length();i++)
    {
        if(arr[i]=='0')
        {
            count0++;
        }
        else if(arr[i]=='1')
        {
            count1++;
        }
    }
    cout<<count0<<" "<<count1<<endl;
}

int main() {
	// your code goes here
int t;
cin>>t;
while(t--)
{
    zeroOne();
}
return 0;
}