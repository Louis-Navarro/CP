class Solution {
public:
#define ll long long
    int titleToNumber(string s) {
        int ans=0;
        ll mul=1;
        for (int i=s.size()-1; ~i; --i){
            ans+=mul*(s[i]-'A'+1);
            mul*=26;
        }
        return ans;
    }
};
