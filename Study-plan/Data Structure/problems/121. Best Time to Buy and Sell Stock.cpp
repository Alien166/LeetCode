class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        if(prices.size()<0) return 0;
        int st=prices[0];
        int nd=prices[0];
        for(int i=0;i<prices.size();++i){
            if(prices[i] < st){
                ans=max(ans , nd - st);
                st=prices[i];
                nd=prices[i];
            }
            else{
                nd=max(nd , prices[i]);
            }
            ans=max(ans , nd-st);
        }
        return ans;
    }
};
