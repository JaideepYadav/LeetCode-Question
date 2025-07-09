class Solution {
public:
    void solve(int n,string &s, string &tiles, vector<bool>&vis,unordered_set<string>&st)
    {
        st.insert(s);

        for(int i=0;i<n;i++){
            if(vis[i]==true)continue;
            vis[i]=true;
            s.push_back(tiles[i]);
            solve(n,s,tiles,vis,st);
            s.pop_back();
            vis[i]=false;
        }
    }
    int numTilePossibilities(string tiles) {
        unordered_set<string>st;
        int n=tiles.length();
        string s="";
        vector<bool>vis(n,false);
        solve(n,s,tiles,vis,st);
        return st.size()-1;
    }
};