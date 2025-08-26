class Solution {
public:
    
    int areaOfMaxDiagonal(vector<vector<int>>& dim) {
        int n=dim.size();
        int maxdiag=0,maxarea=0;
        for(int i=0;i<n;i++){
            int l=dim[i][0];
            int w=dim[i][1];
            int diag=l*l+w*w;
            int area=l*w;
            if(diag>maxdiag || (diag==maxdiag && area>maxarea) ){
                maxdiag=diag;
                maxarea=l*w;
            }
            
        }

            
    return maxarea;
    }
};