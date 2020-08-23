class Solution {
public:
    string toGoatLatin(string s) {
        unordered_set<char> v = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        string ans="", to_add;
        int w=1, n=s.size();
        bool do_new=1;
        for (int i=0; i<n; ++i){
            if (s[i] == ' '){
                ans+=to_add + string(w, 'a') + ' ';
                to_add="";
                do_new=1;
                ++w;
            }
            else if (do_new){
                do_new=0;
                if (v.find(s[i]) != v.end()){
                    ans+=s[i];
                }
                else
                    to_add+=s[i];
                to_add+="ma";
            }
            else {
                ans+=s[i];
            }
        }
        ans+=to_add + string(w, 'a');
        return ans;
    }
};
