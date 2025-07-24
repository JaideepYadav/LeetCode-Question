class Solution {
public:
    double multiply(double x, int n){
        if(n == 0)
            return 1;
        else if(n%2 == 0){
            double res = multiply(x, n/2);
            return res*res;
        }
        else {
            double res = multiply(x,n/2);
            return x*res*res; 
        }
    }

    double myPow(double x, int n) {
        if(x == 0)
            return 0;
        double ans = multiply(x,n);
        if(n < 0)
            return 1/ans; 
        
        return ans;
        
    }
};