class Solution {
public:

    long long solve(string s,int limit,string suffix){
        if(s.size()<suffix.size())return 0;
        long long count=0;
        string piche=s.substr(s.size()-suffix.size());
        int remain=s.size()-suffix.size();
        for(int i=0;i<remain;i++){
            int a=s[i]-'0';
            if(a<=limit){
                count+=a*pow(limit+1,remain-i-1);
            }
            else{
                count+=pow(limit+1,remain-i);
                return count;
            }
        }
        if(piche>=suffix)count+=1;
        return count;
    }
    long long numberOfPowerfulInt(long long start, long long finish, int limit, string s) {
        string s1=to_string(start-1);
        string s2=to_string(finish);
        return solve(s2,limit,s)-solve(s1,limit,s);
    }
};