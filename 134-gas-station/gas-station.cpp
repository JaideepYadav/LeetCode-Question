class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0,sum2=0;
        for(int i=0;i<gas.size();i++){
            sum+=gas[i];
            sum2+=cost[i];

        }
        if(sum<sum2)return -1;
        int gsum=0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            gsum+=gas[i]-cost[i];
            if(gsum<0){
                gsum=0;
                 start=i+1;
            }
        }
        return start;
    }
};