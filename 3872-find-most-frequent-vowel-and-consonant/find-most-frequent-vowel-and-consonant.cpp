class Solution {
public:
    bool isvo(char c){
        return (c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u');
    }
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        for(auto a:s){
            mp[a]++;
        }
        int vowel=0;
        int conso=0;
        for(auto& p:mp){
            int count=p.second;
            char a=p.first;
            if(isvo(a)){
                vowel=max(vowel,count);
            }
            else{
                conso=max(conso,count);
            }
        }
        return conso+vowel;
    }
};