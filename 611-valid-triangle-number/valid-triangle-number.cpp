class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=nums.size()-1;
        int count=0;
        for(k;k>=2;k--){
            int i=0,j=k-1;
            while(i<j){
                    if((nums[i]+nums[j])>nums[k]){
                        count+=(j-i);
                        j--;
                    }
                    else
                    i++;
                
               
            }
        }
        return count;
    }
};