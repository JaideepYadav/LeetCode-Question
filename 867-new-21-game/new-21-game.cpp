class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        vector<double>prob(n+1,0.0);
        prob[0]=1;
        double sum;
        if(k==0)sum=0;
        else sum=1;
        for(int i=1;i<=n;i++){
            
             prob[i]=sum/maxPts;
            if(i<k)sum+=prob[i];
            if(i-maxPts>=0 && i-maxPts<k){
                sum-=prob[i-maxPts];
            }
    
        }
        double ans=0;
        for(int i=k;i<=n;i++){
            ans+=prob[i];
        }
        return ans;
    }
};