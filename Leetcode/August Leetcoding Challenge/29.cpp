class Solution {
public:
#define beg(c) (c).begin()
#define all(c) (c).begin(), (c).end()
    vector<int> pancakeSort(vector<int>& a) {
        int n=a.size();
        vector<int> ans;
        while (!is_sorted(beg(a), beg(a)+n)){
            while (a[n-1] == n) --n;
            cout << n << endl;
            int inx=find(all(a), n) - a.begin();
            if (inx){
                reverse(beg(a), beg(a)+inx+1);
                ans.push_back(inx+1);
            }
            reverse(beg(a), beg(a)+n);
            ans.push_back(n);
        }
        return ans;
    }
};
