class Solution {
public:
#define vt vector

    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        const int n=A.size();

        vt<pair<int, int>> posA;
        vt<pair<int, int>> posB;
        for (int i=0; i<n; ++i)
            for (int j=0; j<n; ++j){
                if (A[i][j])
                    posA.push_back(make_pair(i, j));
                if (B[i][j])
                    posB.push_back(make_pair(i, j));
            }

        int ans=0;
        map<pair<int, int>, int> cnt;

        for (auto a : posA)
            for (auto b : posB){
                auto vec = make_pair(b.first - a.first, b.second - a.second);

                ++cnt[vec];
                ans = max(ans, cnt[vec]);
            }

        return ans;
    }
};
