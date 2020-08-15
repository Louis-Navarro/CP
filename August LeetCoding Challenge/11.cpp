class Solution {
public:
#define ar array
    bool f(int x, int n, vector<int>& arr){
        return n-x<arr[x];
    }
    int hIndex(vector<int>& arr) {
        //int n=arr.size();
        //int mx=0;
        //for (int i=0; i<n; ++i)
            //mx=max(mx, arr[i]);

        //unordered_map<int, ar<int, 2>> mp;
        //for (int i=0; i<n; ++i){
            //for (int j=0; j<=arr[i]; ++j)
                //++mp[j][0];
            //for (int j=arr[i]+1; j<=mx; ++j)
                //++mp[j][1];
        //}
        //mx=0;
        //for (auto it=mp.begin(); it!=mp.end(); ++it){
            //auto c=*it;
            //int i=c.first;
            //auto a=c.second;
            ////cout << i << " " << a[0] << " " << a[1] << endl;
            //if (a[0]>=i && a[0]+a[1]==n){
                //mx=max(mx, i);
            //}
        //}
        //return mx;

        int n=arr.size();
        if(!n) return n;

        sort(arr.begin(), arr.end());

        for (int i=0; i<n; ++i)
            if (n-i<=arr[i]) return n-i;
        return 0;
    }
};
