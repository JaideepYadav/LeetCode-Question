class Solution {
public:
    int hIndex(vector<int>& ci) {
        sort(ci.begin(),ci.end());
        int n=ci.size();
        int Max=0;
        int count=n;
        int flag=0;
        for(int i=0;i<n;i++){
            if(ci[i]>=count)
                return count;
           // else Max=1;
            count--;
        }
        return count;
    }
};