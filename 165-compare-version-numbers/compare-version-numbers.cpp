class Solution {
public:
    vector<int> split(const string &s) {
        vector<int> res;
        string token;
        stringstream ss(s);
        while (getline(ss, token, '.')) {
            res.push_back(stoi(token)); 
        }
        return res;
    }
    int compareVersion(string version1, string version2) {
        vector<int>v1=split(version1);
        vector<int>v2=split(version2);
        int n=max(version1.size(),version2.size());
        for(int i=0;i<n;i++){
            int num1=(i<v1.size())?v1[i]:0;
            int num2=(i<v2.size())?v2[i]:0;
            if(num1<num2)return -1;
            if(num1>num2)return 1;

        }
        return 0;
    }
};