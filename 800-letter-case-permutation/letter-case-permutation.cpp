class Solution {
public:
    void solve(int index,string &temp,string s,vector<string>&ans){
        if(index==s.size()){
            ans.push_back(temp);
            return;
        }
        if(isalpha(s[index])){
        string a1=temp;
        string a2=temp;
        a1.push_back(tolower(s[index]));
        a2.push_back(toupper(s[index]));
        solve(index+1,a1,s,ans);
        solve(index+1,a2,s,ans);}
        if(isdigit(s[index])){
            string a=temp;
            a.push_back(s[index]);
            solve(index+1,a,s,ans);
        }
    }
    vector<string> letterCasePermutation(string s) {
        string temp="";
        vector<string>ans;
        solve(0,temp,s,ans);
        return ans;
    }
};