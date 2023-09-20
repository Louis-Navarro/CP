class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> dig{1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<vector<int>> ans;
        for (int b=0; b<(1<<9); ++b){
            int c=0, s=0;
            vector<int> sub;
            for (int i=0; i<9; ++i)
                if (b&(1<<i)){
                    sub.push_back(dig[i]);
                    s+=dig[i];
                    ++c;
                }
            if (s==n && c==k)
                ans.push_back(sub);
        }
        return ans;
    }
};
