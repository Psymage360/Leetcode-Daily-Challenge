class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        int vis[n]={0};
        vector<int>indgr(n,0);
        vector<int>v[n];
        for(auto it:prerequisites){
            v[it[1]].push_back(it[0]);
        }
        for(int i=0;i<n;i++){
        for(auto it:v[i]){
            indgr[it]++;
        }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indgr[i]==0){
                q.push(i);
            }
        }
        int cnt=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();cnt++;
            for(auto it:v[node]){
                indgr[it]--;
                if(indgr[it]==0){
                    q.push(it);
                }
            }
        }
        if(cnt==n) return true;
        else return false;
    }
};