class Solution {
public:
    int canBeTypedWords(string text, string br) {
        vector<bool>b(26,false);
        for(char c:br)b[c-'a']=true;
        int count=0;
        bool ok=true;
        for(int i=0;i<=text.size();i++){
            if(i<text.size() && text[i]!=' '){
                if(b[text[i]-'a']) ok =false;

            }
            else{
                if(ok)count++;
                ok=true;
            }
        }
        return count;
    }
};