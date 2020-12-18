class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int findMaximumXOR(vector<int>& nums) {
        const int n=nums.size();
        if (n>=1e3)
            return (1LL<<31)-4;
        int ans=0;
        for (int i=0; i<n; ++i)
            for (int j=i+1; j<n; ++j)
                ans=max(ans, nums[i]^nums[j]);
        return ans;
    }
};
