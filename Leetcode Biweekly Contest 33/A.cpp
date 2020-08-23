class Solution {
public:
    string thousandSeparator(int n) {
        string s=to_string(n);
        n=s.size();
        int c=0;
        for (int i=n-1; i; --i){
            if (++c==3){
                s=s.substr(0, i)+'.'+s.substr(i);
                c=0;
            }
        }
        return s;
    }
};
