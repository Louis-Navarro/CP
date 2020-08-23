class Solution {
public:
#define vt vector
    int n, m;
    vt<vt<bool>> vis;
    
    const int dX[4]={-1, 0, 1, 0}, 
          dY[4]={0, 1, 0, -1};

    bool cpos(int x, int y){
        return ~x && x<n && ~y && y<m;
    }
    bool check(int i, int j, vt<vt<char>>& grid, int pX, int pY){
        vis[i][j]=1;
        char c=grid[i][j];
        for (int k=0; k<4; ++k){
            int x=i+dX[k];
            int y=j+dY[k];
            
            if (cpos(x, y) && grid[x][y] == c && x!=pX && y!=pY){
                if (vis[x][y]) return 1;
                bool ok = check(x, y, grid, i, j);
                if (ok) return 1;
            }
        }

        return 0;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        vis=vt<vt<bool>>(500, vt<bool>(500, 0));
        n=grid.size(), m=grid[0].size();

        bool ok=0;
        for (int i=0; i<n; ++i){
            if (ok) break;

            for (int j=0; j<m; ++j){
                if (!vis[i][j])
                    ok=check(i, j, grid, -1, -1);
                if (ok) break;
            }
        }

        return ok;
    }
};
