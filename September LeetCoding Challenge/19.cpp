class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for (int j=1; j<10; ++j){
            int i=j;
            while (i<=high){
                short l=i%10;
                if (i>=low)
                    ans.push_back(i);
                if (++l>9) break;
                i=i*10+l;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
