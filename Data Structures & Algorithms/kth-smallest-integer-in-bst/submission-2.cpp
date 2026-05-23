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

auto ios_opt = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> orderList = {};
    int targetIndex;
    int kthSmallest(TreeNode* root, int k) {
        targetIndex = k - 1;
        dfs(root);
        return orderList[targetIndex];
    }

   void dfs(TreeNode* root) {
        if(root == nullptr || orderList.size() > targetIndex) {
            return;
        }
        
        dfs(root->left);
        if (orderList.size() > targetIndex) return;                  
        orderList.push_back(root->val);
        dfs(root->right);
    }
};
