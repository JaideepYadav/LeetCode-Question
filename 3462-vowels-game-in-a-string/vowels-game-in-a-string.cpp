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
                ans.push_back(i);
                count++;
            }
        }
       // if(count%2!=0 && index==n-1)return true;
       if(count==0)return false;
        return true;
    }
};