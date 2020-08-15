class Solution {
public:
#define vt vector
    int r, c;
    bool isOk(int x, int y){
        return x>-1 && x<r && y>-1 && y<c;
    }
    int orangesRotting(vt<vt<int>>& grid) {
        r=grid.size(), c=grid[0].size();

        bool ch=0;
        int n=2;
        while (true){
            for (int i=0; i<r; ++i){
                for (int j=0; j<c; ++j){
                    if (grid[i][j]==n){
                        for (auto x : { -1, 1 }){
                            if (isOk(i+x, j) && grid[i+x][j]==1){
                                grid[i+x][j]=grid[i][j]+1;
                                ch=1;
                            }
                            if (isOk(i, j+x) && grid[i][j+x]==1){
                                grid[i][j+x]=grid[i][j]+1;
                                ch=1;
                            }
                        }
                    }
                }
            }

            if (!ch) break;
            ch=0;
            ++n;
        }

        for (int i=0; i<r; ++i)
            for (int j=0; j<c; ++j)
                if (grid[i][j]==1) return -1;

        return n-2;
    }
};
