class Solution {
public:
#define vt vector
//#define f first
//#define s second

    void magic(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int vtmin(vt<int> a, int INF=1e9){
        int ans=INF;
        for (int x : a) ans=min(ans, x);
        return ans;
    }

    void umin(int& a, const int b){
        a=min(a, b);
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        magic();

        int n=days.size();
        // DP array
        vt<int> dp(n, 0);
        int mn=vtmin(costs);
        dp[n-1]=mn;

        for (int i=n-2; ~i; --i){
            //cout << "i: " << i << endl;
            // 1-day pass
            dp[i]=mn+dp[i+1];

            // 7-day pass
            int next=i+1;
            while (next<n && days[next]-days[i]<7) ++next;
            //cout << "next: " << next << endl;
            if (next<n)
                umin(dp[i], min(costs[1], costs[2])+dp[next]);
            else
                umin(dp[i], min(costs[1], costs[2]));

            // 30-day pass
            next=i+1;
            while (next<n && days[next]-days[i]<30) ++next;
            //cout << "next: " << next << endl << endl;
            if (next<n)
                umin(dp[i], costs[2]+dp[next]);
            else
                umin(dp[i], costs[2]);
        }

        return dp[0];
    }
};
