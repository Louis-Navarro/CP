class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int f=0;
        for (int i=1; i; ++i){
            if (find(a.begin(), a.end(), i) == a.end()) ++f;
            if (f==k) return i;
        }
        return 0;
    }
};
