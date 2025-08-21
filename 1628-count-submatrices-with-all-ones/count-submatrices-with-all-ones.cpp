class Solution {
public:
    int count(vector<int>res){
        int cons=0;
        int ans=0;
        for(auto it:res){
            if(it==0)cons=0;
            else cons++;
            ans+=cons;
        }
        return ans;
    }
    int numSubmat(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int result=0;
        for(int i=0;i<m;i++){
            vector<int>res(n,1);
            for(int j=i;j<m;j++){
                for(int col=0;col<n;col++){
                    res[col]=res[col] & mat[j][col];
                }
                result+=count(res);
            }
        }
        return result;
    }
};