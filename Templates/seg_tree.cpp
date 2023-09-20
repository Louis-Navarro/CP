struct seg_tree{
    int n;
    vector<int> t;

    seg_tree(int maxn){
        this->n = maxn;
        t = t(4*maxn);
    }
}
