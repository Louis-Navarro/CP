class Solution {
public:
#define vt vector
    int s;
    vt<int> ar;
    vt<vt<int>> r;

    Solution(vector<vector<int>>& rects) {
        r=rects;
        s=0;
        for (vector<int> c : rects){
            int x1=c[0];
            int y1=c[1];
            int x2=c[2];
            int y2=c[3];
            
            int tmp= (abs(x2-x1)+1) * (abs(y2-y1)+1);
            s+=tmp;
            ar.push_back(s);
        }
    }
    
    vector<int> pick() {
        int area=rand()%s + 1;
        int i=0;
        for(; i<ar.size(); ++i)
            if (area<=ar[i]) break;

        int dx=rand() % (abs(r[i][0] - r[i][2])+1);
        int dy=rand() % (abs(r[i][1] - r[i][3])+1);
        return {dx+r[i][0], dy+r[i][1]};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(rects);
 * vector<int> param_1 = obj->pick();
 */
