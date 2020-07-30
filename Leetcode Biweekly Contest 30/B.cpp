class Solution {
    public:
        int rangeSum(vector<int>& nums, int n, int left, int right) {
            int mod=1e9+7;
            vector<int> sums;

            //for (int b=1; b < (1<<n); b++){
                //int s=0;

                ////int i=0;
                ////while (b&(1<<i) && i<n){
                    ////s+=nums[i];
                    ////i++;
                ////}
                //bool d=false;
                //for (int i=0; i<n; i++){
                    //if (b&(1<<i)){
                        //s+=nums[i];
                        //d=true;
                    //}
                    //else if (d)
                        //break;
                //}

                //sums.push_back(s);
            //}
            
            sort(sums.begin(), sums.end());
            int s=0;
            for (int i=left-1; i<right; ++i)
                s+=sums[i];
            return s;
        }
};
