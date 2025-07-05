class Solution {
public:
    int findLucky(vector<int>& arr) {
       map<int,int>mpp;
        int c=1;
       for(int a:arr){
        mpp[a]++;
       }
       int Max=-1;
       for(auto it:mpp){
        if(it.first==it.second)Max=max(Max,it.first);
       }
       return Max;

    }
};