class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        vector<unordered_map<long long,int>>dp(A.size());
        int res = 0;
        for(int i = 0; i<A.size(); ++i){
            for(int j = 0; j<i; ++j){
                long long diff = static_cast<long long>(A[i]) - A[j];
                res +=  dp[j][diff];
                dp[i][diff] += dp[j][diff]+1;
            }
        }
        return res;
    }
};
