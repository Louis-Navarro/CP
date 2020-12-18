class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    string largestNumber(vector<int>& nums) {
        const int n=nums.size();
        vector<string> vs(n);
        for (int i=0; i<n; ++i) vs[i]=to_string(nums[i]);
        sort(vs.begin(), vs.end(), [](const string& a, const string& b){
                return a+b>b+a;
        });
        if (vs[0]=="0") return "0";
        string ans="";
        for (string n : vs)
            ans+=n;
        return ans;
    }
};
