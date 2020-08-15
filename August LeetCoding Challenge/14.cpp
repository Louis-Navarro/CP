class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char, int> mp;
        for (int i=0; i<n; ++i)
            ++mp[s[i]];
        bool o=0;
        int ans=0;
        for (auto it=mp.begin(); it!=mp.end(); ++it){
            int c=it->second;
            ans += c;
            if (o && c&1) --ans;
            o |= c&1;
        }
        return ans;
    }
};
