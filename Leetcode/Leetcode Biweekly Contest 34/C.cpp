class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int findLengthOfShortestSubarray(vector<int>& arr) {
        if (is_sorted(arr.begin(), arr.end())) return 0;

        const int n=arr.size();

        // Get distance with first element smaller
        int ans=0;
        for (int i=0; i<n; ++i){
            // First greater element
            int f=0;
            for (int j=0; j<i; ++j){
                if (arr[j]>arr[j+1]){
                    f=j;
                    break;
                }
            }
            // Last greater element
            int j=0;
            while (arr[j]<=arr[j+1] && j<i) ++j;
            int l=-1;
            if (arr[j]>arr[j+1]) l=j;

            int d=l-f+1;
            cout << i << " " << f << " " << l << " " << d << endl;
            ans=max(ans, d);
        }
        cout << endl;
        return ans;
    }
};
