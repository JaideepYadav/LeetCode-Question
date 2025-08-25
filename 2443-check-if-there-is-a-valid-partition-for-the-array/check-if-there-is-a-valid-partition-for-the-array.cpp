class Solution {
public:
    int dp[100001];
    bool solve(int i,vector<int>&nums){
        int n=nums.size();
        if(i>=nums.size())return true;
        bool res=false;
        if(dp[i]!=-1)return dp[i];
        if(i+1<n && nums[i]==nums[i+1]){
            res=solve(i+2,nums);
            if(res)return true;
        }
        if(i+2<n && nums[i]==nums[i+1] && nums[i+1]==nums[i+2]){
            res=solve(i+3,nums);
            if(res)return true;
        }
        if(i+2<n && nums[i+1]-nums[i]==1 && nums[i+2]-nums[i+1]==1){
            res=solve(i+3,nums);
        }
        return dp[i]= res;
    }
    bool validPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(0,nums);
    }
};