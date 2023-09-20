class Solution {
public:
#define umap unordered_map

    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    bool wordPattern(string pat, string str) {
        stringstream s(str);
        vector<string> vs;
        string c;
        while (s>>c) vs.push_back(c);
        if (pat.size() != vs.size())
            return 0;

        umap<char, string> l;
        for (int i=0; i<pat.size(); ++i){
            if (l.find(pat[i]) != l.end() && l[pat[i]] != vs[i])
                return 0;
            l[pat[i]] = vs[i];
        }
        unordered_set<string> seen;
        for (auto p : l)
            seen.insert(p.second);
        return seen.size() == l.size();
    }
};
