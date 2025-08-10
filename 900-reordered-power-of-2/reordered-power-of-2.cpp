class Solution {
public:
    vector<int>freq(int n){
        vector<int>f(10,0);
        while(n>0){
            f[n%10]++;
            n=n/10;
        }
        return f;
    }
    bool check(vector<int>&target, vector<int>&freq){
        if(target.size()==freq.size())
        for(int i=0;i<target.size();i++){
            if(target[i]!=freq[i])return false;
        }
        return true;
    }
    bool reorderedPowerOf2(int n) {
        vector<int>target=freq(n);
        for(int i=0;i<=30;i++){
            int a=(int)pow(2,i);
            vector<int>ab=freq(a);
            if(check(target,ab))return true;
        }
        return false;
    }
};