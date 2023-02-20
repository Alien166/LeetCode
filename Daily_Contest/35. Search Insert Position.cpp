class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len=nums.size();
        if(len==0){
            return 0;
        }
        if(len==1){
            if(nums[0]>=target){
                return 0;
            }
            if(nums[0]<target){
                return 1;
            }
        }
        for(int i=0;i<len;i++){
            if(nums[i]==target || nums[i]>target){
                return i;
            }
        }
        return len;
    }
};
