class Solution {
public:
int func(int n,int r){
    long long int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
    vector<vector<int>> generate(int n) {
        vector<vector<int>>arr2;
        for(int i=0;i<n;i++){
        vector<int>arr;
        for(int j=0;j<=i;j++){
            int a=func(i,j);
            arr.push_back(a);
            }
            arr2.push_back(arr);
        }
        return arr2;
    }
};