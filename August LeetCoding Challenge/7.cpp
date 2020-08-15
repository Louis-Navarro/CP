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
#define vt vector
#define umap unordered_map
#define all(c) (c).begin(), (c).end()
#define pii pair<int, int>
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vt<vt<int>> ans;
        if(!root) return ans;

        map<int, vt<pii>> mp;
        int hd=0, vd=0;
        queue<pair<TreeNode*, pii>> q;
        q.push(make_pair(root, make_pair(hd, vd)));

        while (!q.empty()){
            auto next = q.front();
            q.pop();

            auto cur=next.first;
            auto d=next.second;
            hd=d.first;
            vd=d.second;

            mp[hd].push_back(make_pair(vd, cur->val));

            auto left=cur->left;
            auto right=cur->right;

            if (left) q.push(make_pair(left, make_pair(hd-1, vd+1)));
            if (right) q.push(make_pair(right, make_pair(hd+1, vd+1)));
        }
        int n=mp.size();
        ans = vt<vt<int>>(n);

        int i=0;
        for (auto el : mp){
            auto row = el.second;
            sort(all(row));
            for (auto val : row)
                ans[i].push_back(val.second);

            ++i;
        }

        return ans;
    }
};
