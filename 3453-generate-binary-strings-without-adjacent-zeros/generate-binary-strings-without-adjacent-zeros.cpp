class Solution {
public:
void check(int n,string s,vector<string>&ans){
    if(n==s.size()){
        ans.push_back(s);
        return;
    }
    check(n,s+"1",ans);
    if(s.empty() || s[s.size()-1]=='1')check(n,s+"0",ans);
}
    vector<string> validStrings(int n) {
        string s="";
        vector<string>ans;
        check(n,s,ans);
        return ans;
    }
};