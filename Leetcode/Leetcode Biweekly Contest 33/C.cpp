class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int n=nums.size(), ans=0;
        int l=0;
        for (int c : nums){
            int cl=0;
            while (c){
                while (~c&1){
                    c/=2;
                    ++cl;
                }
                --c;
                ++ans;
            }
            l=max(l, cl);
        }
        return ans+l;
    }
};




/*
   2 4 8 16
   
   8
 */
