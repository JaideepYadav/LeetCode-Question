class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n==1)return arr[0];
        string start=arr[0];
        string end=arr[n-1];
        string prefix="";
        for(int i=0;i<start.size();i++){
            if(start[i]!=end[i])break;
            prefix+=start[i];
        }
        return prefix;
    }
};