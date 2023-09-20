struct dsu{
    vector<int> p;
    vector<int> s;

    dsu(int n){
        p.assign(n, -1);
        s.assign(n, -1);
    }

    void make(int v){
        p[v]=v;
        s[v]=1;
    }

    int find(int v){
        if (v == p[v])
            return v;
        return p[v] = find(p[v]);
    }

    void merge(int a, int b){
        a = find(a);
        b = find(b);
        if (a!=b){
            if (s[a] < s[b])
                swap(a, b);
            p[b] = a
            s[a] += s[v]
        }
    }
}
