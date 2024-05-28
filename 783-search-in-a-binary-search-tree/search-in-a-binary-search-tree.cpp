class Solution { // Search in a Binary Search Tree
public:
    // Time Complexity: O(h), Space Complexity: O(1)
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr || root->val == val) {
            return root;
        }
        if (val < root->val) {
            return searchBST(root->left, val);
        }
        return searchBST(root->right, val);
    }
};