class Solution {  // All Elements in Two Binary Search Trees
public:
    // Time Complexity: O(n1 + n2), Space Complexity: O(n1 + n2)
    vector<int>ans;
    void tree(TreeNode* toot) {
        if (!toot) {
            return;
        }
        ans.push_back(toot->val);
        tree(toot->right);
        tree(toot->left);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        tree(root1);
        tree(root2);
        sort(ans.begin(), ans.end());
        return ans;
    }
};