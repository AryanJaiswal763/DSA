#include<bits/stdc++.h>
using namespace std;

int main()
{
    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<int>>adjMatrix(vertex, vector<int>(vertex,0));

    int u,v;
    
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;
    }


    for(int i=0;i<adjMatrix.size();i++)
    {
        for(int j=0;j<adjMatrix[0].size();j++)
        {
           cout<<adjMatrix[i][j]<<" ";

        }
        cout<<endl;
    }
}