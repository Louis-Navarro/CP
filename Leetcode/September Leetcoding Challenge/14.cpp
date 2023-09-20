class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int rob(vector<int>& nums) {
        const int n=nums.size();
        vector<int> dp(n);
        int ans=0, mx=0;
        for (int i=0; i<n; ++i){
            if (i>1)
                mx=max(mx, dp[i-2]);
            dp[i]=mx+nums[i];
            ans=max(ans, dp[i]);
        }
        //for(int x : dp) cout << x << " ";
        //cout << " " << ans << endl;
        return ans;
    }
};
