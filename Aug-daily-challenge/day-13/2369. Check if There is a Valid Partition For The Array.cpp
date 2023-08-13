class Solution {
public:
    bool validPartition(vector<int>& nums) {
        int n = nums.size();   
        vector<bool> dp(4, 0); // 4 states are enough
        dp[0]=1;  // Initialize dp[0] to 1
        
        for (int i = 0; i < n; i++) {
            bool b0= i>0 && (nums[i] == nums[i-1]);       
            bool b1= i>1 && ((nums[i] == nums[i-1] && nums[i-1] == nums[i-2])
            ||( nums[i] == nums[i-1] + 1 && nums[i-1] == nums[i-2] + 1));
            
            dp[(i+1)%4]= (b0 && dp[(i-1)%4]) || (b1 && dp[(i-2)%4]);
        //    cout<<i<<":"<<b0<<","<<b1<<", dp="<< dp[(i+1)%4]<<endl;
        }
        return dp[n%4];
    }
};

