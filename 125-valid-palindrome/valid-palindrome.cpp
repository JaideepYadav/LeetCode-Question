class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string s2="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                s2+=tolower(s[i]);
            }
        }
        string a=(s2);
        
        reverse(s2.begin(),s2.end());
        cout<<a<<endl<<s2;
        if(s2==a)return true;
        return false;
    }
};