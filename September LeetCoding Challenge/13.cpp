class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& nin) {
        const int n=in.size();
        vector<vector<int>> ans;
        int i;
        bool ok=0;
        for (i=0; i<n; ++i){
            if (in[i][0] > nin[1] || in[i][1] < nin[0]){
                if (in[i][0] > nin[1] && !ok){
                    ans.push_back(nin);
                    ok=1;
                }
                ans.push_back(in[i]);
                continue;
            }
            //nin[0]=min(nin[0], in[i][0]);
            //nin[1]=max(nin[1], in[i][1]);
            ////cout << nin[0] << " " << nin[1] << endl;
            //++i;
            while (i<n && in[i][0] <= nin[1]){
                nin[0]=min(nin[0], in[i][0]);
                nin[1]=max(nin[1], in[i][1]);
                //cout << nin[0] << " " << nin[1] << endl;
                ++i;
            }
            --i;
            ans.push_back(nin);
            ok=1;
        }
        //cout << endl;
        
        if (!ok) ans.push_back(nin);

        return ans;
    }
};
