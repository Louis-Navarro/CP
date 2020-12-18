class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    string getHint(string s1, string g1) {
        const int n=s1.size();
        vector<int> s(n), g(n);
        for (int i=0; i<n; ++i){
            s[i] = s1[i]-'0';
            g[i] = g1[i]-'0';
        }

        int r=0;
        for (int i=0; i<n; ++i)
            if (s[i] == g[i]){
                s[i]=-1;
                g[i]=-1;
                ++r;
            }

        int w=0;
        for (int c : g){
            if (c==-1) continue;
            else{
                int inx=-1;
                for (int i=0; i<n; ++i)
                    if (s[i]==c){
                        s[i]=-1;
                        inx=i;
                        break;
                    }
                if (inx==-1) continue;
                ++w;
            }
        }

        string ans="";
        ans += to_string(r) + 'A';
        ans += to_string(w) + 'B';

        return ans;
    }
};
