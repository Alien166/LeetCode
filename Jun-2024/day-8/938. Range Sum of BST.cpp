class Solution {
public:
    int total;
    void traverse(TreeNode* root, int L, int R) {
        if(root == NULL)
            return;
        if(root->val>=L && root->val<=R)
            total += root->val;
            
        traverse(root->left, L, R);
        traverse(root->right, L, R);
    }
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        total = 0;
        traverse(root, L, R);
        return total;
    }
};
