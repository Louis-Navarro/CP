class Solution {

    unordered_set<string> d;
    unordered_map<string, bool> dp;

    bool works(string s){
        const int n=s.size();
        if (!n)
            return 1;

        if (dp.find(s) != dp.end())
            return dp[s];

        string c="";
        for (int i=0; i<n; ++i){
            c+=s[i];
            if (d.find(c) != d.end() && works(s.substr(i+1))){
                dp[s]=1;
                return 1;
            }
        }
        dp[s]=0;
        return 0;
    }

public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        for (string w : wordDict)
            d.insert(w);
        return works(s);
    }
};
