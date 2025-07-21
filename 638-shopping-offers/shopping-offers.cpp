class Solution {
public:
    map<vector<int>,int>mp;
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        if(mp.count(needs)!=0)return mp[needs];
        int ans=0;
        for(int i=0;i<needs.size();i++){
            ans+=price[i]*needs[i];
        }
        for(int j=0;j<special.size();j++){
            bool isvalid=true;
            for(int i=0;i<needs.size();i++){
                if(needs[i]<special[j][i]){
                    isvalid=false;
                    break;
                }
            }
            if(isvalid){
                for(int i=0;i<needs.size();i++){
                    needs[i]=needs[i]-special[j][i];
                }
                int ans2=special[j].back()+shoppingOffers(price,special,needs);
                ans=min(ans,ans2);
                for(int i=0;i<needs.size();i++){
                    needs[i]+=special[j][i];
                }
            }
        }
        return mp[needs]=ans;
       
    }
};