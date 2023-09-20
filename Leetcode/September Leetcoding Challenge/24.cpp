class Solution {
public:
#define ll long long
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    char findTheDifference(string s, string t) {
        const int n=s.size();
        ll s1=0, s2=t[0];
        for (int i=0; i<n; ++i)
            s1+=(ll)s[i], s2+=(ll)t[i+1];
        return (char)(s2-s1);
    }
};
