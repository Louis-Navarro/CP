class Solution {
public:
#define vt vector
#define uset unordered_set
#define umap unordered_map

    //umap<int, int> p;
    //umap<int, int> d;
    
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    //void make_set(int v){
        //p[v] = v;
        //d[v] = 1;
    //}

    //int find_set(int v){
        //if (p[v]==v) return v;
        //return p[v]=find_set(p[v]);
    //}

    //void union_set(int a, int b){
        //a=find_set(a);
        //b=find_set(b);
        //if (a!=b){
            //if (d[a]<d[b]) swap(a, b);
            //p[b]=a;
            //d[a]+=d[b];
        //}
    //}

    //int gcd(int a, int b){
        //return b ? gcd(b, a%b) : a;
    //}

    //int largestComponentSize(vector<int>& a) {
        //for (int c : a)
            //make_set(c);

        //int ans=0;
        //for (int i=0; i<a.size(); ++i){
            //for (int j=i+1; j<a.size(); ++j){
                //if (gcd(a[i], a[j]) > 1){
                    //union_set(a[i], a[j]);
                //}
            //}
        //}
        
        //for (pair<int, int> x : d)
            //ans=max(ans, x.second);
        //return ans;

        ////umap<int, uset<int>> f;
        ////umap<int, uset<int>> l;
        ////for (int c : a){
            ////make_set(c);
            ////for (int d=2; d*d<=c; ++d){
                ////if (c%d==0){
                    ////f[c].insert(d);
                    ////l[d].insert(c);
                ////}
                ////while (c%d==0)
                    ////c/=d;
            ////}
        ////}

        ////for (auto c : a){
            ////for (int of : f[c]){
                ////for (int o : l[of])
                    ////union_set(c, o);
            ////}
        ////}

        ////int ans=1;
        ////for (pair<int, int> x : d)
            ////ans=max(ans, x.second);
        ////return ans;


    //}

    vt<int> p;
    vt<int> r;
    int gP(int v){
        if (p[v]==-1) return v;
        return p[v] = gP(p[v]);
    }

    void add(int a, int b){
        int pA=gP(a);
        int pB=gP(b);

        if (pA == pB) return;
        if (r[pA] >= r[pB]) {
            r[pA] += r[pB];
            p[pB] = pA;
        } else {
            r[pB] += r[pA];
            p[pA] = pB;
}
    }

    int largestComponentSize(vector<int>& a) {
        int ans=0;
        const int n=a.size();
        p = vt<int>(n, -1);
        r = vt<int>(n, 1);
        umap<int, int> m;

        for (int i=0; i<n; ++i){
            int c=a[i];
            for (int j=2; j*j<=c; ++j){
                if (c%j==0){
                    if (m.count(j))
                        add(m[j], i);
                    else
                        m[j]=i;

                    if (m.count(c/j))
                        add(m[c/j], i);
                    else
                        m[c/j]=i;
                }
            }
            if (m.count(c))
                add(m[c], i);
            else
                m[c] = i;
            ans=max(ans, r[gP(i)]);
        }
        return ans;
    }
};
