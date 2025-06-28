class Solution {
public:
    string reverseWords(string s) {
        vector<string>st;
        istringstream iss(s);
        string word;
        while(iss>>word)st.push_back(word);
        int n=st.size();
        reverse(st.begin(),st.end());
        string str;
        for(int i=0;i<n-1;i++){
            str+=st[i]+" ";
        }
        str+=st[n-1];
        return str;

    }
};