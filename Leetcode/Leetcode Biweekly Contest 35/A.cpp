class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int sumOddLengthSubarrays(vector<int>& arr) {
        const int n=arr.size();
        int ans=0;
        for (int i=0; i<n; ++i){
            int s=0;
            for (int j=i; j<n; ++j){
                s+=arr[j];
                if ((i-j+1)&1) ans+=s;
            }
        }
        return ans;
    }
};
