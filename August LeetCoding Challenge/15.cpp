class Solution {
public:
#define vt vector
#define all(c) (c).begin(), (c).end()
    int eraseOverlapIntervals(vector<vector<int>>& arr) {
        int n=arr.size(), ans=0;
        if (n<2) return ans;

        sort(all(arr), [](const vt<int>& a, const vt<int>& b){
                return a[1]<b[1];
                });

        int prev=arr[0][1];

        for (int i=1; i<n; ++i){
            if (arr[i][0] < prev)
                ++ans;
            else
                prev=arr[i][1];
        }
        return ans;
    }
};
