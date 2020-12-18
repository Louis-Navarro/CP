class Solution {
public:
#define fi first
#define se second
    bool isRobotBounded(string s) {
        const int n=s.size();
        pair<int, int> pos=make_pair(0, 0), dir=make_pair(0, 1);
        for (int i=0; i<n; ++i){
            if (s[i] == 'G'){
                pos.fi += dir.fi;
                pos.se += dir.se;
            }
            else if (s[i]=='L'){
                int x = dir.fi&1 ? 0 : dir.se>0 ? -1 : 1;
                dir.se = dir.se&1 ? 0 : dir.fi>0 ? 1 : -1;
                dir.fi=x;
            }
            else if (s[i] == 'R'){
                int x = dir.fi&1 ? 0 : dir.se>0 ? 1 : -1;
                dir.se = dir.se&1 ? 0 : dir.fi>0 ? -1 : 1;
                dir.fi=x;
            }
            //cout << pos.fi << " " << pos.se << endl;
            //cout << dir.fi << " " << dir.se << endl;
            //cout << endl;
        }
        return (pos.first==0 && pos.second==0) || (dir!=make_pair(0, 1));
    }
};
