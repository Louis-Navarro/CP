class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        int n=s.size();
        if (n != t.size()) return false;

        int ans=0;
        unordered_map<int, int> cnt;
        for (int i=0; i<n; ++i){
            int c=t[i]-s[i];
            if (c<0){
                c+=26;
            }
            ++cnt[c];
            c+=(cnt[c]-1)*26;
            ++cnt[c];
            ans = max(ans, c);
        }
        return ans <= k;

        //for (auto x:a)
            //cout << x << " ";
        //cout << "\n";

        //int prev=0;
        //for (auto it=a.begin(); it!=a.end(); ++it){
            //int c=*it;
            //while (c<=prev && prev!=0){
                //auto keep=it;
                //--keep;
                ////if (c+26>k) return false;
                //a.insert(c+26);
                //a.erase(it);
                //it=keep;
                //++it;
            //}
            //prev=c;
        //}

        ////for (auto x:a)
            ////cout << x << " ";
        ////cout << "\n";

        ////cout << a[n-1] << endl;
        ////return true;
        //return *a.rbegin()<=k;
    }
};
