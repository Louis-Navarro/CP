class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> cnt;
        unordered_set<int> seen;
        vector<int> ans;
        const int n=nums.size();
        for (int x : nums){
            ++cnt[x];
            if (cnt[x]>n/3 && seen.find(x) == seen.end()){
                ans.push_back(x);
                seen.insert(x);
            }
        }
        return ans;
    }
};
