class Solution {
public:
    int findKthPositive(vector<int>& arr, int k)
    {
        vector<int>ans;
        int n=arr[arr.size()-1];
        for(int i=0;i<n;i++){
            ans.push_back(i+1);
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(find(arr.begin(),arr.end(),ans[i])==arr.end()){
                count++;
                if(count==k)return ans[i];
            }
        }
        return n+(k-count);
    
    }
};