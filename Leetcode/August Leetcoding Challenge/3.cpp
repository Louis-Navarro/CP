class Solution {
public:
    bool isRight(char c){
        return ('a'<=c&&c<='z') || ('A'<=c&&c<='Z');
    }
    bool isPalindrome(string s) {
        int n=s.size();
        int lb=0, rb=n-1;
        while (lb<rb){
            while (lb<rb && !isalnum(s[lb])) ++lb;
            while (lb<rb && !isalnum(s[rb])) --rb;
            char l, r;
            l=tolower(s[lb]);
            r=tolower(s[rb]);
            if (l!=r) return false;
            ++lb, --rb;
        }
        return true;
    }
};
