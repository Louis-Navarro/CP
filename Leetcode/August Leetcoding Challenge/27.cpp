class Solution {
public:
#define vt vector
    void magic(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    vt<int> findRightInterval(vt<vt<int>>& intervals) {
        magic();

        const int n=intervals.size();

        unordered_map<int, int> inx;
        //vt<int> start;
        set<int> start;
        for (int i=0; i<n; ++i){
            inx[intervals[i][0]] = i;
            //start.push_back(intervals[i][0]);
            start.insert(intervals[i][0]);
        }

        //sort(start.begin(), start.end());

        vt<int> ans(n);
        for (int i=0; i<n; ++i){
            vt<int> c=intervals[i];
            //auto next = lower_bound(start.begin(), start.end(), c[1]);
            auto next=start.lower_bound(c[1]);
            if (next == start.end())
                ans[i]=-1;
            else{
                int v=*next;
                //auto v=*next;
                //cout << v.first;
                ans[i]=inx[v];
                //else
                    //ans[i]=-1;
            }
        }
        return ans;
    }
};
