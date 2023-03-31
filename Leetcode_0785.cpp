class Solution {
public:
    bool dfs(int node, int col, vector<vector<int>> &adj, int color[])
    {
        color[node]=col;
        for(auto it: adj[node])
        {
            if(color[it]==-1)
            {
                if(dfs(it, !col,adj,color)==false)
                return false;
            }
            else if(color[it]==col)
            {
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& adj) {
    int V=adj.size();
    int color[V];
	    for(int i=0;i<V;i++)
	        color[i]=-1;
        for(int i=0;i<V;i++)
        {
	    if(color[i]==-1)
        {
            if(dfs(i,0,adj,color)==false)
            return false;
        }
        }
        return true;
    }
};