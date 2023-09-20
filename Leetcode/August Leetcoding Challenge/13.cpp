class CombinationIterator {
public:
    priority_queue<string, vector<string>, greater<string>> its;
    //queue<string> its;
    CombinationIterator(string cs, int cl) {
        int n=cs.size();
        
        for (int b=0; b<(1<<n); ++b){
            string c="";
            //TODO: create subsest;
            for (int i=0; i<n; ++i){
                if (b&(1<<i)) c+=cs.at(i);
                if (c.size()>cl) break;
            }

            if (c.size()==cl) its.push(c);
        }
        //for (int i=0; i<its.size(); ++i){
            //string c=its.top();
            //cout << c << " ";
            //its.pop();
            //its.push(c);
        //}
        //cout << endl;
    }
    
    string next() {
        string c=its.top();
        its.pop();
        return c;
    }
    
    bool hasNext() {
        return !its.empty();
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
