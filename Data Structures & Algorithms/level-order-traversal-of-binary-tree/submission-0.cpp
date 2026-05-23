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

    vector<vector<int>> levelOrder(TreeNode* root)
    {
        if(root == nullptr) return {};

        queue<TreeNode*> que;
        que.push(root);
        vector<vector<int>> currLevelOrder = {};

        while (!que.empty()) {
            int currentLength = que.size();
            vector<int> breathOrder = {};

            for (int i = 0; i < currentLength; i++) {
                TreeNode* node = que.front();
                que.pop();
                breathOrder.push_back(node->val);
                // TODO: logic
                if (node->left != nullptr) {
                    que.push(node->left);
                }
                if (node->right != nullptr) {
                    que.push(node->right);
                }
            }
            currLevelOrder.push_back(breathOrder);
        }

        return currLevelOrder;
    }
};
