class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int d=n/3;
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        vector<int>ans;
        for(auto it:mp){
            if(it.second>d)ans.push_back(it.first);
        }
        return ans;
    }
};