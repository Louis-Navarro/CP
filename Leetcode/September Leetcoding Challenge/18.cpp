class Solution {
public:
#define vt vector
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int maxProfit(vector<int>& prices) {
        const int n=prices.size();
        if (!n) return n;
        int ans=0, s=prices[0];
        for (int i=1; i<n; ++i){
            ans=max(ans, prices[i]-s);
            s=min(s, prices[i]);
        }
        return ans;
    }
};
