class Solution {
public:
    //bool isOk(string sub){
        //int cnt[10];
        //memset(cnt, 0, sizeof(cnt));
        //for (int i=0; i<sub.size(); ++i)
            //++cnt[sub[i]-'0'];
        //int o=0;
        //for (int i=0; i<10; ++i)
            //if (cnt[i]&1) ++o;
        //return o<=1;
    //}
    //int longestAwesome(string s) {
        //int ans=0;
        //int n=s.size();
        //for (int i=0; i<n; ++i){
            //for (int j=1; j<=n-i; ++j){
                //string c=s.substr(i, j);
                //if (isOk(c)) ans=max(ans, j);
            //}
        //}
        //return ans;
    //}
    

    int longestAwesome(string s){
        int ans=0;
        //int n=s.size();
        for (int i=0; i<s.size(); ++i){
            int o=0;
            int cnt[10]={ 0 };
            string c="";
            for (int j=i; j<s.size(); ++j){
                c+=s[j];
                ++cnt[s[j]-'0'];
                if (cnt[s[j]-'0']&1) ++o;
                else if (cnt[s[j]-'0']>1) --o;
                if (o<2) ans = max(ans, j-i);
            }
        }
        return ans+1;
    }
};
