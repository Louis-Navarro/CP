class Solution {

    int n, m, cnt;
    const int di[4]={-1, 0, 1, 0}, dj[4]={0, 1, 0, -1};
    pair<int, int> end;
    vector<vector<int>> grid;

    int ok(int i, int j){
        return i>=0 && j>=0 && i<n && j<m;
    }

    int numWays(pair<int, int> start, set<pair<int, int>> vis){
        if (start==end){
            //cout << size(vis) << endl;
            return size(vis)==cnt;
        }

        int i=start.first, j=start.second;
        grid[i][j]=-1;
        vis.insert(start);
        int ans=0;
        //cout << n << " " << m << endl;
        for (int k=0; k<4; ++k){
            int x=i+di[k], y=j+dj[k];
            if (ok(x, y) && grid[x][y]!=-1){
                //cout << x << " " << y << " " << grid[x][y] << endl;
                ans+=numWays(make_pair(x, y), vis);
            }
        }
        grid[i][j]=0;
        vis.erase(vis.find(start));
        return ans;
    }

public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int uniquePathsIII(vector<vector<int>>& _grid) {
        grid=_grid;
        n=grid.size(), m=grid[0].size();
        pair<int, int> start;
        cnt=0;
        for (int i=0; i<n; ++i)
            for (int j=0; j<m; ++j){
                if (grid[i][j]==1){
                    start=make_pair(i, j);
                    ++cnt;
                }
                else if (grid[i][j]==2)
                    end=make_pair(i, j);
                else if (grid[i][j]==0)
                    ++cnt;
            }
        set<pair<int, int>> vis;
        return numWays(start, vis);
    }
};
