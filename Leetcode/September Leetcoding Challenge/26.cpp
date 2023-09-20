class Solution {
public:
#define ll long long
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int findPoisonedDuration(vector<int>& time, int d) {
        const int n=time.size();
        ll ans=0;
        for (int i=0; i<n; ++i){
            ans+=d;
            if (i && time[i-1]+d>time[i])
                ans -= time[i-1] + d - time[i];
        }
        return ans;
    }
};
