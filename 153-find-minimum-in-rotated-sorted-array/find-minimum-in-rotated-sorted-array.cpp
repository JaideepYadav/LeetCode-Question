class Solution {
public:
    int findMin(vector<int>& nums) {
       int n=nums.size();
       int ans=0;
       if(nums.size() <= 1) return nums[0];
       for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                ans=nums[i+1];
                break;
            }else{
                ans = nums[0];
            }
       }
       return ans;
    }
};