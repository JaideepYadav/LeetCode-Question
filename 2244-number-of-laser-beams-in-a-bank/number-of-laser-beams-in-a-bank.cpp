class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int pre=0, ans=0;
        for(auto it:bank){
            int curr=count(it.begin(),it.end(),'1');
            if(curr>0){
                ans+=curr*pre;
                pre=curr;
            }
        }
        return ans;
    }
};