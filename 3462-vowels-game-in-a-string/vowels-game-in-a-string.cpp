class Solution {
public:
    bool isVowel(char ch) {
    ch = tolower(ch); // Convert to lowercase to handle both cases
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
    bool doesAliceWin(string s) {
        int n=s.size();
        int index,count=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                return true;
            }
        }
        return false;
    }
};