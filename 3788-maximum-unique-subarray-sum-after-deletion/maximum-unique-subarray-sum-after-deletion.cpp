class Solution {
public:
    int maxSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=nums[n-1];
        int i=n-2;
        while(i>=0 && nums[i]>0){
            if(nums[i]!=nums[i+1]){
                sum+=nums[i];
            }
            i--;

        }
        return sum;
    }
};