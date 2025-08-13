class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int>st;
        vector<int>a1,a2;
        int temp1=x;
        int t2=y;
        a1.push_back(1);
        a2.push_back(1);
        if(x!=1){
            while(temp1<bound){
            a1.push_back(temp1);
            temp1*=x;}
        }
        if(y!=1){
            while(t2<bound){
            a2.push_back(t2);
            t2*=y;}
        }
         vector<int>ans;
        for(int i:a1){
            for(int j:a2){
                if(i+j<=bound)st.insert(i+j);
            }
        }
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
            
    }
};