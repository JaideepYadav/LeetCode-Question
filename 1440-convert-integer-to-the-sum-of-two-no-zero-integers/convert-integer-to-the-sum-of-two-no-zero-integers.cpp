class Solution {
public:
    bool check(int a,int b){
        string s1=to_string(a);
        string s2=to_string(b);
        if((s1.find('0')==string::npos) && (s2.find('0')==string::npos))return true;
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int j=n-i;
            if(check(i,j)){
                return {i,j};
            }
        }
        return {};
    }
};