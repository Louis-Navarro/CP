class Solution {
    int min3(int a, int b, int c){
        return min(min(a, b), c);
    }

    int max3(int a, int b, int c){
        return max(max(a, b), c);
    }

public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int maxProduct(vector<int>& nums) {
        const int n=nums.size();
        vector<int> a(n), b(n);
        a[0]=b[0]=nums[0];
        int ans=b[0];
        for (int i=1; i<n; ++i){
            a[i] = max3(nums[i], a[i-1]*nums[i], b[i-1]*nums[i]);
            b[i] = min3(nums[i], a[i-1]*nums[i], b[i-1]*nums[i]);
            ans=max(ans, a[i]);
        }
        return ans;
    }
};
