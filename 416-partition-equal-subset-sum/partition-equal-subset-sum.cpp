class Solution {
public:
int dp[205][20005];
bool solve(int index,int n,vector<int>&nums,int target){
    if(index>=n)return false;
    if(target<0)return false;
    if(target==0)return true;
    if(dp[index][target]!=-1)return dp[index][target];
    int incl=solve(index+1,n,nums,target-nums[index]);
    int excl=solve(index+1,n,nums,target);
     dp[index][target]=incl or excl;
     return dp[index][target];
}
    bool canPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2)return false;
        int target=sum/2;
        int  n=nums.size();
        return solve(0,n,nums,target);
    }
};