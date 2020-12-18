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
    vector<int> ans;

    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    void dfs(TreeNode* root){
        ans.push_back(root->val);
        if (root->left) dfs(root->left);
        if (root->right) dfs(root->right);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        ans = vector<int>();
        if (root1) dfs(root1);
        if (root2) dfs(root2);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
