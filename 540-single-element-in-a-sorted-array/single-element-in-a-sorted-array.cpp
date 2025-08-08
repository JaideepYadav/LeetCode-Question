class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if(mid%2!=0)mid--;
          //      if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])return nums[mid];
                if(nums[mid]!=nums[mid+1])high=mid;
                else low=mid+2;
            
            // else{
            //     if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])return nums[mid];

            //     if(nums[mid]!=nums[mid-1])low=mid+1;
            //     else high=mid-2;
            // }
            
        }
        return nums[low];
    }
};