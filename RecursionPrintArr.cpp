#include<bits/stdc++.h>
using namespace std;
void printarray(vector<int>a, int n)
{
    if(n==0)
    return;
    
     printarray(a, n-1);
     cout<<a[n-1];
     cout<<" ";

}


int main()
{
    vector<int>a;
    for(int i=0;i<5;i++)

    {
        a.push_back(i+1);
    }

    printarray(a, a.size());
    return 0;
}