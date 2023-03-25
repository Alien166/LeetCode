class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int max = m + n - 1;
		int k = m - 1;
		int l = n - 1;
		while (k >= 0 && l >= 0) {
			if (nums2[l] > nums1[k]) nums1[max--] = nums2[l--];
			else nums1[max--] = nums1[k--];
		}
		while (l >= 0)nums1[max--] = nums2[l--];
	}
        
};
