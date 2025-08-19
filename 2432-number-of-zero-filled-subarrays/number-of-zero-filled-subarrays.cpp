class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        int Max=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count=count+(j+1);
             //   Max=max(Max,count);
                j++;
            }
            else{
                // count=0;
                j=0;
            }
        }
        return count;
    }
};