class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n=s.size();
        int m=pattern.size();
        vector<string>arr;
        int i=0;
        while(i<n){
            string st="";
           // i=0;
            while(i<n && s[i]!=' '){
                st+=s[i];
                i++;

            }
            arr.push_back(st);
            while(i<n && s[i]==' ')i++;
        }
        if(arr.size()!=m)return false;
        for(int i=0;i<m;i++)cout<<arr[i]<<" ";
        map<char,string>mp;
        map<string,char>mp2;
        for(int i=0;i<m;i++){
            char c=pattern[i];
            string a=arr[i];
            if(mp.count(c) && mp[c]!=a)return false;
            if(mp2.count(a) && mp2[a]!=c)return false;
            mp[c]=a;
            mp2[a]=c;
        }
        return true;
    }
};