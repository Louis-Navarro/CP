class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int cap=0;
        for (int i=0; i<n; ++i)
            cap+=isupper(word.at(i));
        return cap==0 || cap==n || (cap==1 && isupper(word.at(0))) ? "YES":"NO";
    }
};
