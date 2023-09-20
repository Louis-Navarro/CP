#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, r="";
    cin >> s;
    for (int i=0; i<s.size(); ++i){
        if (s.at(i)!='+')
            r+=s.at(i);
    }
    sort(r.begin(), r.end());
    string t;
    for (int i=0; i<r.size(); ++i){
        t+=r[i];
        t+="+";
    }
    t.pop_back();
    cout << t << "\n";
}
