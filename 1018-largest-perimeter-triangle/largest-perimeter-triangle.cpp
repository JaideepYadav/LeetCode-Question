class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        // int Max=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if(nums[i]+nums[j]>nums[k] && nums[i]+nums[k]>nums[j] && nums[k]+nums[j]>nums[i]){
        //                 int a=nums[i]+nums[j]+nums[k];
        //                 Max=max(a,Max);
        //             }
        //         }
        //     }
           
        //}
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i+1]+nums[i+2]>nums[i])
            return nums[i]+nums[i+1]+nums[i+2];
        }
        return 0;
        
    }
};