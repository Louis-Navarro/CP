class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        const int n=s.size();
        string t=s.substr(0, n/2);
        int i=t.size();
        //cout << s << " " << s*2 << endl;
        while (i>0){
            string c="";
            if (n%i==0)
                for (int j=0; j<n/i; ++j)
                    c+=t;
            if (c == s) return 1;
                
            t.pop_back();
            i=t.size();
        }
        return 0;
    }
};
