class Solution {
public:
#define ll long long
#define vt vector
#define pb push_back

    vt<int> getRow(int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        vt<vt<int>> dp(k+1);
        dp[0].pb(1);
        for (int i=1; i<k+1; ++i){
            dp[i].pb(1);
            for (int j=1; j<i; ++j)
                dp[i].pb(dp[i-1][j-1]+dp[i-1][j]);
            dp[i].pb(1);
        }
        return dp[k];
    }
};
