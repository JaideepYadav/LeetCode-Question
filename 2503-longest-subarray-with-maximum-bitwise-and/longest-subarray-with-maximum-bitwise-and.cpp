class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int m=*max_element(nums.begin(),nums.end());
        int maxLength=0;
        int currentLength=0;
    for (int num : nums) {
        if (num == m) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 0;
        }
    }
    maxLength=max(maxLength,currentLength);
    return maxLength;
    }
};