class StreamChecker {
public:
    struct Trie{
        char letter;
        bool leaf=0;
        unordered_map<char, Trie*> next;
        Trie() {}
        Trie(char letter): letter(letter) {};
    }* root;
    string q="";
    int nq;
    StreamChecker(vector<string>& words) {
        root=new Trie();
        nq=0;
        for (string w: words){
            int n=w.size();
            Trie* tmp=root;
            for (int i=n-1; ~i; --i){
                if (tmp->next[w[i]]){
                    tmp=tmp->next[w[i]];
                }
                else{
                    tmp->next[w[i]]=new Trie(w[i]);
                    tmp=tmp->next[w[i]];
                }
                //cout << tmp->letter << endl;
            }
            //cout << endl;
            tmp->leaf=1;
        }
    }
    
    bool query(char letter) {
        q+=letter, ++nq;
        Trie* tmp=root;
        for (int i=nq-1; ~i; --i){
            //cout << q[i] << endl;
            if (tmp->leaf) return 1;
            if (!tmp->next[q[i]]){
                //cout << endl;
                return 0;
            }
            tmp=tmp->next[q[i]];
            if (tmp->leaf) return 1;
        }
        //cout << endl;
        return tmp->leaf;
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
