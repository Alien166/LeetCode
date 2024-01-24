class Solution {
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        int result = 0;
        vector<pair<TreeNode *, int>> stk = {{root, 0}};
        while (!stk.empty()) {
            auto [node, count] = stk.back(); stk.pop_back();
            if (!node) {
                continue;
            }
            count ^= 1 << node->val;
            result += int(!node->left && !node->right && (count & (count - 1)) == 0);
            stk.emplace_back(node->right, count);
            stk.emplace_back(node->left, count);
        }
        return result;
    }
};
