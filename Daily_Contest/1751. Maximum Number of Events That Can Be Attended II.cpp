#define ll long long int
class Solution {
public:
    int BS(int i,vector<vector<int>>&events,int val){
        int l=i;
        int h=events.size()-1;
        int ind=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(events[mid][0]>val){
                ind=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ind;
    }
    ll f(vector<vector<int>>& events,int k,int i,vector<vector<ll>>& dp){
        if(i>=events.size() or i==-1) return 0;
        if(k<=0) return 0;
        if(dp[i][k]!=-1) return dp[i][k];
        //int ind=upper_bound(events[0].begin()+i,events[0].end(),events[i][1])-events[0].begin()+i;
        int ind=BS(i+1,events,events[i][1]);
        int pick=events[i][2]+f(events,k-1,ind,dp);
        int nonpick=f(events,k,i+1,dp);
        return dp[i][k]=max(pick,nonpick);
    }
    int maxValue(vector<vector<int>>& events, int k) {
        int n=events.size();
        sort(events.begin(),events.end());
        vector<vector<ll>> dp(n+1,vector<ll> (k+1,-1));
        int ans=f(events,k,0,dp);
        return ans;
    }
};
