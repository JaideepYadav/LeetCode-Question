class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mpp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        //vector<int>arr={1,5,10,50,100,500,1000};
        int total=0;
       // vector<char>num={'I','V','X','L','C','D','M'};
       int n=s.size();
        for(int i=0;i<s.size()-1;i++){
            if(mpp[s[i]]<mpp[s[i+1]]){
                total-=mpp[s[i]];
            }
            else total+=mpp[s[i]];
        }
        total+=mpp[s[n-1]];
        return total;
    }
};