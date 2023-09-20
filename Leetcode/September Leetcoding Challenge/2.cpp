class Solution {
public:
#define ll long long
    
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    
    bool containsNearbyAlmostDuplicate(vector<int>& a, int k, int t) {
        const int n=a.size();
        if (n<2 || k<1) return 0;

        bool ans=0;
        set<ll> p;
        p.insert(a[0]);
        for (int i=1; i<n; ++i){
            ll c=a[i];
            auto f=p.lower_bound(c);
            if (f!=p.end())
                ans |= abs(*f - c) <= t;

            if (f!=p.begin()){
                --f;
                ans |= abs(*f - c) <= t;
            }

            p.insert(c);
            if(p.size()>k)
                p.erase(p.find(a[i-k]));
        }
        //cout << endl;
        return ans;
    }
};
