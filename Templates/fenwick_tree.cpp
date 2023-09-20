struct fen_tree {
    vector<int> bit;
    int n;

    fen_tree(int n){
        this->n = n;
        bit.assign(n, 0);
    }

    fen_tree(vector<int> a): fen_tree(a.size()){
        for (size_t i=0; i<a.size(); ++i)
            add(i, a[i]);
    }

    int sum(int r){
        int ans = 0;
        for (; r>=0; r = (r & (r+1)) - 1){
            ans += bit[r]
        }
        return ans;
    }
    
    int sum(int l, int r){
        return sum(r) - sum(l-1); 
    }
    
    void add(int i, int d){
        for (; i<n; i= i | (i+1)){
            bit[i] += d;
        }
    }
};
