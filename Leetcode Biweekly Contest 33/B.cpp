class Solution {
public:
#define vt vector
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_set<int> nl;
        for (vt<int> c : edges)
            nl.insert(c[1]);
        unordered_set<int> l;
        for(vt<int> c : edges)
            if (nl.find(c[0]) == nl.end())
                l.insert(c[0]);
        vt<int> ans;
        for (int c : l)
            ans.push_back(c);
        return ans;
    }
};
