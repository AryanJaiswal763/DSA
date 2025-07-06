#include<bits/stdc++.h>
using namespace std;


void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &reachable) 
{
    visited[node] = true;
    reachable.push_back(node);
    
    for (int neighbor : adj[node]) 
    {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, reachable);
        }
    }
}

vector<int> getReachableNodes(int start, vector<vector<int>> &adj, int n)
 {
    vector<bool> visited(n, false);
    vector<int> reachable;
    dfs(start, adj, visited, reachable);
    return reachable;
}


int main() {
    int n = 6; 
    vector<vector<int>> adj(n);

    // Example graph
    adj[0] = {1, 3};
    adj[1] = {0,2};
    adj[2] = {1,3,5};
    adj[3] = {0,2,4};
    adj[4] = {3,5};
    adj[5]={2,4};

    int start;
    cout<<"Enter Node (1-6): ";
    cin>>start;

    vector<int> reachable = getReachableNodes(start, adj, n);

    cout << "Nodes reachable from node " << start << ": ";
    for (int node : reachable) {
        cout << node << " ";
    }

    return 0;
}
