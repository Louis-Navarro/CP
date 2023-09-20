class Solution {
public:
#define ull unsigned long long
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        const int n=nums.size();
        if (!(n && k)) return 0;
        int ans=0, i=0, cur=1;
        for (int j=0; j<n; ++j){
            cur*=nums[j];
            while (i<j && cur>=k)
                cur/=nums[i++];
            if (cur<k)
                ans+=j-i+1;
        }
        return ans;
    }
};
