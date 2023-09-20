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
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int k;

    TreeNode* find_min(TreeNode* root){
        while (root->left)
            root=root->left;
        return root;
    }

    void remove(TreeNode* root, TreeNode* p){
        // No children
        if (!root->left && !root->right){
            //cout << (p->left == root) << endl;
            //cout << (p->right == root) << endl;
            if (p->left == root)
                p->left = nullptr;
            else if (p->right == root)
                p->right = nullptr;
        }
        // Only one child
        // Left child
        else if (root->left && !root->right){
            root->val = root->left->val;
            root->right = root->left->right;
            root->left = root->left->left;
        }
        // Right child
        else if (!root->left && root->right){
            root->val = root->right->val;
            root->left = root->right->left;
            root->right = root->right->right;
        }
        
        // Two children
        else if (root->left && root->right){
            TreeNode* smol = find_min(root->right);
            int v = smol->val, tmp=k;
            k=v;
            dfs(root, nullptr);
            k=tmp;
            root->val=v;
        }
        else 
            cout << "Fuck" << endl;
    }
    void dfs(TreeNode* root, TreeNode* p){
        if (root->val == k)
            remove(root, p);
        else{
            if (root->left) dfs(root->left, root);
            if (root->right) dfs(root->right, root);
        }
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return root;
        if (root->val==key && !root->left && !root->right) return nullptr;
        k=key;
        dfs(root, nullptr);
        return root;
    }
};
