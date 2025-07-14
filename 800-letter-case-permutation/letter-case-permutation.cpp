class Solution {
public:
    void solve(int index,string &temp,string &s,vector<string>&ans){
        if(index==s.size()){
            ans.push_back(temp);
            return;
        }
        if(isdigit(s[index])){
            temp.push_back(s[index]);
            solve(index+1,temp,s,ans);
            temp.pop_back();
        }
        else if(isalpha(s[index])){
            temp.push_back(tolower(s[index]));
            solve(index+1,temp,s,ans);
            temp.pop_back();
            
            temp.push_back(toupper(s[index]));
            solve(index+1,temp,s,ans);
            temp.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string temp="";
        solve(0,temp,s,ans);
        return ans;
    }
};