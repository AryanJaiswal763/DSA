#include<bits/stdc++.h>
using namespace std;

int SubsetSum(vector<int>a, int sum, int start, int end)
{
    
    if(start==end)
    {
        
        return sum;
    }

   return SubsetSum(a, sum, start+1, end) + SubsetSum(a, sum+a[start], start+1, end);

}

int main()
{
    vector<int>a={3,4,5};
    cout<<SubsetSum(a, 0, 0, a.size()-1);
    return 0;
}