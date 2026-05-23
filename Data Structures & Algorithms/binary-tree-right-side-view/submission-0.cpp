class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightSide;
        dfs(root, 0, rightSide);
        return rightSide;
    }

private:
    void dfs(TreeNode* root, int depth, vector<int>& rightSide) {
        if (root == nullptr) return;

        // 현재 깊이와 벡터의 크기가 같다면, 이 깊이에서 처음 발견한 (가장 우측) 노드입니다.
        if (depth == rightSide.size()) {
            rightSide.push_back(root->val);
        }

        // 오른쪽을 먼저 방문하여 가장 우측 노드가 먼저 처리되도록 합니다.
        dfs(root->right, depth + 1, rightSide);
        dfs(root->left, depth + 1, rightSide);
    }
};