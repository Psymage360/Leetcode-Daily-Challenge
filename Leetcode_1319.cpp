#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int node, vector<vector<int>>&adj, vector<int>&vis)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            dfs(it,adj,vis);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)
        return -1;
        vector<vector<int>> adj(n);
        for(auto connection: connections)
        {
            adj[connection[0]].push_back(connection[1]);
            adj[connection[1]].push_back(connection[0]);
        }

        int c=0;
        vector<int> vis(n);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                c++;
                dfs(i,adj,vis);
            }
        }
        return c-1;
    }
};