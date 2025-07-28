class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int a=-1;
        int l=0;
        int n=nums.size();
        int h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]<target){
                l=mid+1;
            }else if(nums[mid]>target){
                h=mid-1;
            }else{  
                a=mid;
                h=mid-1;

            }

        }
        ans.push_back(a);
        int b=-1;
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid]<target){
                lo=mid+1;
            }else if(nums[mid]>target){
                hi=mid-1;
            }else{  
                b=mid;
                lo=mid+1;

            }
        }
        ans.push_back(b);
        return ans;
    }
};