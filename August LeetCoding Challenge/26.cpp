class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for (int i=1; i<=n; ++i){
            string c=to_string(i);
            if (i%15<1)
                c="FizzBuzz";
            else if (i%3<1)
                c="Fizz";
            else if (i%5<1)
                c="Buzz";
            ans.push_back(c);
        }
        return ans;
    }
};
