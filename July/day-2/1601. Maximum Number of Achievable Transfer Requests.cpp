class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& requests) {
        int nr = requests.size();
        int ans = 0;
        
        //enumerate all combination of requests
        for(int comb = 0; comb < (1 << nr); ++comb){
            vector<int> out(n), in(n);
            
            for(int i = 0; i < nr; ++i){
                // cout << comb << " " << i << endl;
                if(comb & (1 << i)){
                    //requests[i] is chosen
                    ++out[requests[i][0]];
                    ++in[requests[i][1]];
                }
            }
            
            if(in == out){
                ans = max(ans, accumulate(out.begin(), out.end(), 0));
            }
        }
        
        return ans;
    }
};
