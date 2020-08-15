class Solution {
public:
    vector<int> findDuplicates(vector<int>&nums) {
        unordered_set<int> s;
        vector<int> ans;
        for (auto i : nums){
            if (s.find(i) != s.end()) ans.push_back(i);
            else s.insert(i);
        }
        return ans;
        
        //vector<int> ans;
        //for (int i=0; i<arr.size(); ++i){
            //int c=abs(nums[i])-1;
            //if (nums[c]>0) nums[c] = -nums[c];
            //else ans.push_back(c+1);
        //}
        //return ans;
    }
};
