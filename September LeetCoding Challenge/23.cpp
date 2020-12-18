class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        const int n=(int)gas.size();
        for (int i=0; i<n; ++i){
            int g=gas[i]-cost[i];
            bool ok=g>=0;
            for (int j=(i+1)%n; j!=i; j=(j+1)%n){
                g+=gas[j]-cost[j];
                ok&=g>=0;
            }
            if (ok) return i;
        }
        return -1;
    }
};
