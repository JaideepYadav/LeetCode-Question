class Solution {
public:
    void solve(int st , int n ,int k ,vector<int>&res , vector<vector<int>>&ans){
        
        if(res.size() == k){
            ans.push_back(res);
            return ;
        }
        
        for(int i = st;i<=n;i++){
            res.push_back(i);
            solve(i+1, n ,k, res, ans);
            res.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> res;
        solve(1,n,k,res,ans);
        return ans;
    }
};