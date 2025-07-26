class Solution {
public:
   
bool isVowel(char ch) {
    ch = tolower(ch); 
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
    string reverseVowels(string s) {
        int n=s.size()-1;
        int i=0;
        while(i<n){
            if(isVowel(s[i]) && isVowel(s[n])){
                swap(s[i],s[n]);
                i++;n--;
            }
            else if (isVowel(s[i])){
                n--;
            }
            else i++;
        }
        return s;
    }
};