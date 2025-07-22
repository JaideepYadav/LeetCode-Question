class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        int j=0;
        int ans=0;
        int sum=0;
        int left=0,right=0;
        
        for(int i=0;i<n;i++){
            while(mp.find(nums[right])!=mp.end()){
                mp.erase(nums[left]);
                sum-=nums[left];
                left++;
            }
            mp[nums[right]]++;
            sum+=nums[right];
            right++;
            ans=max(ans,sum);
                
            
        }
        
        return ans;
        
    }
};