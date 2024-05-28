class Solution { // Convert Sorted Array to Binary Search Tree
public:
    // Time Complexity: O(n), Space Complexity: O(n)
    TreeNode* solve(vector<int>& nums, int low, int high) {
        if (low <= high) {
            int mid = low + (high - low) / 2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = solve(nums, low, mid - 1);
            root->right = solve(nums, mid + 1, high);
            return root;
        }
        return nullptr;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1);
    }
};
