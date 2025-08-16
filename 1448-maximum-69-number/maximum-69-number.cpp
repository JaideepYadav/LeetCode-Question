class Solution {
public:
    int maximum69Number (int num) {
        string a=to_string(num);
        string s="";
        int count=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='6' && count==0){
                s[i]+='9';
                count++;}
            else s[i]+=a[i];
        }
        return stoi(s);
    }
};