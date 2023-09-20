class Solution {
public:
#define vt vector
#define vti vt<int>
    int maxProfit(vector<int>& p) {
        int n=p.size();
        vt<vt<vti>> dp(n+1, vt<vti>(3, vti(2, 0)));
        dp[0][1][0]=numeric_limits<int>::max();
        dp[0][2][0]=numeric_limits<int>::max();
        for (int i=0; i<n; ++i){
            dp[i+1][2][1] = max(dp[i][2][1], p[i]-dp[i][2][0]);
            dp[i+1][2][0] = min(dp[i][2][0], p[i]-dp[i][1][1]);

            dp[i+1][1][1] = max(dp[i][1][1], p[i]-dp[i][1][0]);
            dp[i+1][1][0] = min(dp[i][1][0], p[i]);
        }
        return dp[n][2][1];
    }
};
