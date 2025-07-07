class Solution {
public:
    vector<vector<int>>ans;
    void permute(int ind,vector<int>nums){
        if(ind>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            permute(ind+1,nums);
            swap(nums[i],nums[ind]);
        }  
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int ind=0;
        permute(ind,nums);
        return ans;
    }
};