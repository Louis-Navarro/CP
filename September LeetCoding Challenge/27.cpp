class Solution {

    double dfs(string b, string e, double cur, unordered_set<string> vis){
        if (adj.find(b) == adj.end() || adj.find(e) == adj.end())
            return -1;
        for (pair<string, double> u : adj[b])
            if (vis.find(u.first) == vis.end()){
                if (u.first==e) return cur*u.second;
                vis.insert(u.first);
                double c=dfs(u.first, e, cur*u.second, vis);
                if (c!=-1)
                    return c;
            }
        return -1;
    }

public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }

    unordered_map<string, map<string, double>> adj;  // Adjagency list => letter : {end1: weight1, end2: weight2}

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {

        //const int m=equations.size(), n=queries.size();
        //unordered_set<string> l;
        //for (vector<string> e : equations){
            //l.insert(e[0]);
            //l.insert(e[1]);
        //}
        //map<vector<string>, double> v;
        //for (int i=0; i<m; ++i)
            //v[equations[i]] = values[i];

        //vector<double> ans(n);
        //int i=0;
        //for (vector<string> q : queries){
            //bool ok=1;
            //for (string c : q)
                //ok &= l.find(c) != l.end();
            //double cv;
            //if (!ok)
                //cv=-1;
            //else{
                //if (v.find(q) != v.end())
                    //cv=v[q];
                //else if (q[0]==q[1])
                    //cv=1;
                //else{
                    //for (pair<vector<string>, double> p : v){
                        //if (p.first[0] == q[1] && p.first[1] == q[0]){
                            //cv=1.0/p.second;
                            //break;
                        //}
                        //bool ok = 0;
                        //if (p.first[0] == q[0]){
                            //for (pair<vector<string>, double> p2 : v){
                                //if (p.first[1] == p2.first[0] && p2.first[1] == q[1]){
                                    //cv=p.second*p2.second;
                                    //ok=1;
                                    //break;
                                //}
                                //else if (p.first[1]==p2.first[1] && p.first[0] != p2.first[0]){
                                    ////cout << p.second << " " << p2.second << endl;
                                    //cv=p.second/p2.second;
                                    //ok=1;
                                    //break;
                                //}
                            //}
                            //if (ok) break;
                        //}
                    //}
                //}
            //}
            //ans[i++]=cv;
        //}
        //return ans;

        const int n=equations.size();
        for (int i=0; i<n; ++i){
            vector<string> e = equations[i];
            double v = values[i];
            adj[e[0]][e[1]] = v;
            adj[e[1]][e[0]] = 1.0/v;
        }
        
        const int m=queries.size();
        int i=0;
        vector<double> ans(m);
        for (vector<string> q : queries)
            ans[i++]=dfs(q[0], q[1], 1, {});
        return ans;
    }
};
