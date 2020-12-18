class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int compareVersion(string version1, string version2) {
        vector<int> a, b;
        stringstream sa(version1), sb(version2);
        string s;
        while (getline(sa, s, '.'))
            a.push_back(stoi(s));
        while (getline(sb, s, '.'))
            b.push_back(stoi(s));

        while (a.size()>1 && a.back() == 0)
            a.pop_back();
        while (b.size()>1 && b.back() == 0)
            b.pop_back();

        //cout << 1 << endl;
        
        int i=0;
        for (; i<min(a.size(), b.size()); ++i){
            int v1 = a[i];
            int v2 = b[i];

            if (v1 > v2) return 1;
            if (v1 < v2) return -1;
        }
        if (a.size() == b.size()) return 0;
        return a.size() > b.size() ? 1 : -1;
    }
};
