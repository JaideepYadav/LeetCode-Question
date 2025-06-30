class Solution {
public:
    bool check(int s,int d,vector<vector<int>>&adj,vector<int>&vis){
        if(s==d)return true;
        vis[s]=1;
        for(auto it:adj[s]){
            if(!vis[it]){
                if(check(it,d,adj,vis))return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n+1);
        vector<int>vis(n+1,0);
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return check(source,destination,adj,vis);
    }
};