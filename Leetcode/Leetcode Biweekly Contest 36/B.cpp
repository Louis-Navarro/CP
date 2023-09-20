class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    vector<string> alertNames(vector<string>& names, vector<string>& times) {
        const int n=names.size();
        unordered_set<string> r;
        vector<string> ans;
        map<pair<string, string>, int> cnt; // {name, time} --> no. time
        for (int i=0; i<n; ++i){
            string h=times[i].substr(0,2);
            auto c = make_pair(names[i], h);
            if (++cnt[c]>2)
                if (r.find(names[i])==r.end()){
                    r.insert(names[i]);
                    ans.push_back(names[i]);
                }
            if (times[i].substr(3)=="00"){
                h=to_string((stoi(h)+23)%24);
                c = make_pair(names[i], h);
                if (++cnt[c]>2)
                    if (r.find(names[i])==r.end()){
                        r.insert(names[i]);
                        ans.push_back(names[i]);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
