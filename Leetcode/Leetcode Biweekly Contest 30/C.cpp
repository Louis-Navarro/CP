class Solution {
    public:
        int minDifference(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int n=nums.size();
            return nums[n-4]-nums[0];
        }
};
