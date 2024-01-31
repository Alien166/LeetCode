class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> ans(T.size());
        vector<int> temp2ix(101, INT_MAX); //the maximum value of temperature is 100
        
        for(int i = T.size()-1; i >= 0; i--){
            int warmer_index = INT_MAX;
            for(int t = T[i] + 1; t <= 100; t++){
                warmer_index = min(warmer_index, temp2ix[t]);
            }
            if(warmer_index < INT_MAX)
                ans[i] = warmer_index - i;
            temp2ix[T[i]] = i;
        }
        
        return ans;
    }
};
