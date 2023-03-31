class Solution {
public:
long long total=0;
long long remaining;

void dfs(int node, vector<vector<int>>& adj_list, vector<int>& visited,int &c) {
    visited[node] = 1; 
    for (int neighbor : adj_list[node]) {
        if (!visited[neighbor]) {
            c++;
            dfs(neighbor, adj_list, visited,c);
        }
    }
}
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        remaining=n;
        for(auto edge: edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int> vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                int nodes=1;
                dfs(i,adj,vis,nodes);
                total+=nodes*(remaining-nodes);
                remaining-=nodes;
            }
        }
    return total;
    }
};