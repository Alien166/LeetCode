class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0, neg = 1;
        vector<int> result(size(nums));
        for (const auto& x : nums) {
            if (x > 0) {
                result[pos] = x;
                pos += 2;
            } else {
                result[neg] = x;
                neg += 2;
            }
        }
        return result;
    }
};
