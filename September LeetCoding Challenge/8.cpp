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

    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    void dfs(TreeNode* root, int cur){
        // Calculate new value
        cur |= root->val;

        // Found path if root is leaf
        if (!root->left && !root->right)
            ans+=cur;

        // DFS on children
        if (root->left)
            dfs(root->left, cur<<1);
        if (root->right)
            dfs(root->right, cur<<1);
    }

    int sumRootToLeaf(TreeNode* root) {
        if (!root) return 0;

        ans=0;
        dfs(root, 0);
        
        return ans;
    }
};
