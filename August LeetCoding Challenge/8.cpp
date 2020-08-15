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
#define umap unordered_map

    int ans=0;
    umap<int, int> p;

    void dfs(TreeNode* root, int k, int sum){
        if (root){
            int c=root->val;
            if (sum+c == k)
                ++ans;
            ans+=p[sum + c - k];
            
            ++p[sum+c];
            dfs(root->left, k, sum+c);
            dfs(root->right, k, sum+c);

            --p[sum+c];
        }
    }

    int pathSum(TreeNode* root, int k) {
        dfs(root, k, 0);
        return ans;
    }
};
