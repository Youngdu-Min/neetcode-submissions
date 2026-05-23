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
    vector<int> orderList = {};
    int kthSmallest(TreeNode* root, int k) {
        dfs(root);
        for(int idx = 0; idx < orderList.size(); idx++)
        {
        cout << orderList[idx] << endl;
        }
        return orderList[k - 1];
    }

   void dfs(TreeNode* root) {
        if(root == nullptr) {
            return;
        }
        
        dfs(root->left);                  // 1. 왼쪽을 먼저 다녀오면, 나보다 작은 애들이 순서대로 쌓임
        orderList.push_back(root->val);   // 2. 이제 내가 들어갈 차례 (insert 필요 없이 맨 뒤에 넣으면 됨)
        dfs(root->right);                 // 3. 나보다 큰 애들은 내 뒤에 쌓임
    }
};
