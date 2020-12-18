class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    vector<int> di{0, 0, 1, -1}, dj{1, -1, 0, 0};

    bool isPrintable(vector<vector<int>>& arr) {
        const int n=arr.size(), m=arr[0].size();
        map<int, bool> vis;
        for (int i=0; i<n; ++i){
            for (int j=0; j<m; ++j){
                if (vis[arr[i][j]]){
                    bool ok=0;
                    for (int k=0; k<4; ++k){
                        int ci=i+di[k], cj=j+dj[k];
                        if (ci>=0 && ci<n && cj>=0 && cj<m)
                            ok|=arr[ci][cj]==arr[i][j];
                    }
                    if (!ok) return false;
                }
                vis[arr[i][j]]=1;
            }
        }
        return true;
    }
};
