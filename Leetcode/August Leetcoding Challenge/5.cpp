class WordDictionary {
public:
    /** Initialize your data structure here. */
    class Trie{
        public:
            vector<Trie*> children;
            bool isWord;
            Trie(){
                children=vector<Trie*>(26, nullptr);
                isWord=false;
            }

    };
    Trie* root;
    WordDictionary() {
        root = new Trie();
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        Trie* cur = root;
        for (auto ch : word){ 
            int i = (int)(ch-'a');
            if(cur->children[i]==nullptr){
                cur->children[i]=new Trie();
            }
            cur=cur->children[i];
        }
        cur->isWord=true;
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        return find(word, root, 0);
    }

    bool find(string word, Trie* cur, int inx){
        if (inx==word.size()){
            return cur->isWord;
        }
        char ch = word[inx];
        if (ch=='.'){
            for (int i=0; i<26; ++i){
                if (cur->children[i] != nullptr && find(word, cur->children[i], inx+1)) return true;
            }
            return false;
        } else{
            return cur->children[ch-'a'] && find(word, cur->children[ch-'a'], inx+1);
        }
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
