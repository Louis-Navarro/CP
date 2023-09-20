class Solution {
public:
    int minInsertions(string s) {
        map<char, int> cnt;
        int n=s.size();
        int ans=0;
        for (int i=0; i<n; ++i){
            ++cnt[s[i]];
            if (s[i]==')' && cnt['(']*2<cnt[')']){
                ++cnt['('];
                ++ans;
            } else if (s[i]=='(' && cnt[')']&1){
                ++cnt[')'];
                ++ans;
            }
        }
        ans+=cnt['(']*2-cnt[')'];
        return ans;
    }
};
