class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=nums.size()-1;
        int count=0;
        for(k;k>=2;k--){
            int i=0;
            while(i<k-1){
                int j=i+1;
                while(j<k){
                    if((nums[i]+nums[j])>nums[k])count++;
                    j++;
                }
                i++;
            }
        }
        return count;
    }
};