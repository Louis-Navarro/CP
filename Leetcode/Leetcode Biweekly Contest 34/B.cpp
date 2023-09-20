class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    const int M=1e9+7;

    int numWays(string s) {
        const int n=s.size();
        int c1=0;
        int ans=0;
        for (int i=0; i<n; ++i){
            c1+=s[i]=='1';
            int c2=0;
            for (int j=i+1; j<n; ++j){
                c2+=s[j]=='1';
                if (c2!=c1) continue;
                int c3=0;
                for (int k=j+1; k<n; ++k){
                    c3 += s[k]=='1';
                    ans+=c3==c2;
                }
            }
        }
        return ans%M;
    }
};
