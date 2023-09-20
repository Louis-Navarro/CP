class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int firstMissingPositive(vector<int>& nums) {
        unordered_set n(nums.begin(), nums.end());
        int i=1;
        while (n.find(i)!=n.end())
            ++i;
        return i;
    }
};
