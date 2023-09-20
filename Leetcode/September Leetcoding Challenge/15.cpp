class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int lengthOfLastWord(string s) {
         const int n=s.size();
         if (!n) return n;
         int ans=0, i=n-1;
         while (~i && s[i]==' ') --i;
         while (~i && s[i--] != ' ') ++ans;
         return ans;
    }
};
