class Solution {
public:
#define all(c) (c).begin(), (c).end()

    bool ok(string s){
        bool ans = s.size()==4;
        int h = stoi(s.substr(0, 2));
        int m = stoi(s.substr(2));
        ans &= h>=0 && h < 24;
        ans &= m>=0 && m < 60;
        return ans;
    }

    string tostring(vector<int> v){
        string ans="";
        for (int x : v)
            ans += to_string(x);
        return ans;
    }

    bool umax(int &a, int b){
        return a<b ? a=b, 1 : 0;
    }
    
    string largestTimeFromDigits(vector<int>& A) {
        sort(all(A));
        string ans="", s=tostring(A);
        int mx=-1;

        do {
            if (ok(s) && umax(mx, stoi(s)))
                ans = s.substr(0, 2) + ':' + s.substr(2);
        } while (next_permutation(all(s)));
        return ans;
    }
};
