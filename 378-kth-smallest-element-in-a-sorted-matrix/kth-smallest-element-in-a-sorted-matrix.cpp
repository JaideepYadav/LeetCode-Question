class Solution {
public:
    int is(vector<vector<int>> &matrix , int mid){
        int n = matrix.size();
        int m = matrix[0].size();
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(matrix[i][m-1] <= mid)  cnt += m;
            else if(matrix[i][0] <= mid){
                cnt += upper_bound(begin(matrix[i]) , end(matrix[i]) , mid)-begin(matrix[i]);
            }
        }
        return cnt;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int m = matrix[0].size();   
        int l = matrix[0][0];
        int r = matrix[n-1][m-1];
        int ans = -1;
        while(l <= r){
            int mid = l+(r-l)/2;
            if(is(matrix , mid) >= k){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid +1;
            }
        }
        return ans;
        
    }
};