class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        int c=1, i=0;
        vector<int> ans(n, 0);
        while (candies){
            if (candies<c){
                ans[i]+=candies;
                break;
            }
            ans[i]+=c;
            candies-=c;
            ++c;
            ++i, i%=n;
        }
        return ans;
    }
};
