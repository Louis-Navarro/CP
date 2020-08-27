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
    int ans;
    void dfs(TreeNode* n, bool l){
        if (l && !n->left && !n->right) ans+=n->val;
        if (n->left) dfs(n->left, 1);
        if (n->right) dfs(n->right, 0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return 0;
        ans=0;
        dfs(root, 0);
        return ans;
    }
};
