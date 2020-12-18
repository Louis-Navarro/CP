// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10(){
        int r=0, c=0, inx=41;
        while (inx>40){
            r=rand7();
            c=rand7();
            inx = c + (r-1) * 7;
        }
        int ans=(inx-1) % 10;
        return ans + 1;
    }
};
