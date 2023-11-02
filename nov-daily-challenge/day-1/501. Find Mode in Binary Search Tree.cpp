class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> counts;
        vector<int> modes;
        int maxCount = 0;

        inorder(root, counts, maxCount, modes);

        return modes;        
    }

    void inorder(TreeNode* node, unordered_map<int, int>& counts, int& maxCount, vector<int>& modes) {
        if (node == nullptr) {
            return;
        }

        inorder(node->left, counts, maxCount, modes);

        int count = ++counts[node->val];

        if (count > maxCount) {
            maxCount = count;
            modes.clear();
            modes.push_back(node->val);
        } else if (count == maxCount) {
            modes.push_back(node->val);
        }

        inorder(node->right, counts, maxCount, modes);
    }
};
