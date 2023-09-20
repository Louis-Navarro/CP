class Solution {
public:
    int find_last(string a, char k){
        for (int i=a.size()-1; ~i; --i)
            if (a[i] == k)
                return i;

        return -1;
    }

    vector<int> partitionLabels(string S) {
        const int n=S.size();
        int i=0;
        vector<int> ans;
        for (; i<n;){
            string c;
            int l=find_last(S, S[i]);
            for (int j=i; j<l; ++j)
                l = max(l, find_last(S, S[j]));

            ans.push_back(l-i+1);
            i=l+1;
        }
        return ans;
    }
};
