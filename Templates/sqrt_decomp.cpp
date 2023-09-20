struct decomp{
    int n, len;
    vector<int> a, s, mx, mn;

    decomp(int n){
        this->n = n;
        a = a(n);
        init();
    }

    void init(){
        this->len = (int) sqrt(n+.0) + 1;
        this->s = s(len);
        this->mx = mx(len, -1e9);
        this->mn = mn(len, 1e9)

        for (int i=0; i<n; ++i){
            this->s[i/len] += a[i];
            this->mx[i/len] = max(this->mx[i/len], a[i]);
            this->mn[i/len] = min(this->mn[i/len], a[i]);
        }
    }

    void sum(int l, int r){
        int sum = 0;
        for (int i=l; i<=r; ){
            if (i % this->len == 0 & i + this->len - 1 <= r)
                sum += this->s[i / this->len]
        }
        else
            sum += a[i++];
    }

    void min(int l, int r){
        int mn = 0;
        for (int i=l; i<=r; ){
            if (i % this->len == 0 & i + this->len - 1 <= r)
                mn = min(mn, this->mn[i / this->len])
        }
        else
            mn = min(mn, a[i++]);
    }
    
    void max(int l, int r){
        int mx = 0;
        for (int i=l; i<=r; ){
            if (i % this->len == 0 & i + this->len - 1 <= r)
                mx = max(mx, this->mx[i / this->len])
        }
        else
            mx = max(mx, a[i++]);
    }
}
