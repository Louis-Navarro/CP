class Solution {
public:
#define vt vector
#define pb push_back
    //int calc(string c){
        //unordered_set<int> ans;
        //for (int i=0; i<c.size()-1; ++i){
            //int cf=c[i]-'0';
            //int cs=c[i+1]-'0';
            //ans.insert(abs(cf-cs));
        //}
        //return ans.size()-1 ? -1 : *ans.begin();
    //}
    //vector<int> numsSameConsecDiff(int N, int K) {
        //vector<int> ans;
        //int end=pow(10, N);
        //for (int i=end/10; i<end; ++i){
            //string c=to_string(i);
            //int f=c[0]-'0';
            //if (f>K && f>=N-K) continue;
            //if (calc(c)==K) ans.push_back(i);
        //}
        //return ans;
    //}
    
    vt<int> ans;

    void dfs(int i, int n, int k){
        if (!n){
            ans.pb(i);
            return ;
        }

        vt<int> next;
        int last=i%10;
        next.pb(last+k);

        if (k) next.pb(last-k);
        for (int j : next){
            if (j>-1 && j<10){
                int newInt=i*10+j;
                dfs(newInt, n-1, k);
            }
        }
    }

    vector<int> numsSameConsecDiff(int n, int k) {
        --n;
        if (!n) return {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

        //ans=vt<int>();
        for (int i=1; i<10; ++i){
            dfs(i, n, k);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};
