class Solution {
public:
#define vt vector
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    bool carPooling(vector<vector<int>>& trips, int ca) {
        vt<int> take(1001);
        for (vt<int> t : trips){
            take[t[1]]+=t[0];
            take[t[2]]-=t[0];
        }
        for (int c : take){
            ca -= c;
            if (ca<0)
                return 0;
        }
        return 1;
    }
};
