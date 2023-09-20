class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n=A.size(), j=0;
        vector<int> ans(n);
        for (int i=0; i<n; ++i)
            if (A[i]%2<1) ans[j++]=A[i];
        for (int i=0; i<n; ++i)
            if (A[i]%2>0) ans[j++]=A[i];
        return ans;
    }
};
