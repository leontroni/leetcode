class Solution { // Range Sum of BST
public:
    // Time Complexity: O(n), Space Complexity: O(h) 
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == NULL) {
            return 0;
        }
        int curr = ((low <= root->val) && (root->val <= high)) ? root->val : 0;
        int left = rangeSumBST(root->left, low, high);
        int right = rangeSumBST(root->right, low, high);
        return curr + left + right;
    }
}; 