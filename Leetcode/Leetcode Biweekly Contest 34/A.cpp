class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int diagonalSum(vector<vector<int>>& mat) {
        const int n=mat.size();
        set<pair<int, int>> pos;
        for (int i=0; i<n; ++i)
            pos.insert(make_pair(i, i));
        for (int i=0; i<n; ++i)
            pos.insert(make_pair(i, n-i-1));

        int ans=0;
        for (pair<int, int> p : pos){
            int x=p.first, y=p.second;
            ans+=mat[x][y];
        }
        return ans;
    }
};
