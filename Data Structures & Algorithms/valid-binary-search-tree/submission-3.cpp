/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
   public:
    bool isValid = true;
    bool isValidBST(TreeNode* root) {
        dfs(root, INT_MIN, INT_MAX);
        return isValid;
    }

    void dfs(TreeNode* root, int min, int max) {
        if (root == nullptr || !isValid) {
            return;
        }

        if (root->val <= min || root->val >= max) {
            isValid = false;
            return;
        }

        dfs(root->left, min, root->val);
        dfs(root->right, root->val, max);
    }
};
