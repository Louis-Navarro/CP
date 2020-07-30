#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;

    for (int i=0; i<s1.size(); ++i){
        char j1=tolower(s1.at(i));
        char j2=tolower(s2.at(i));
        if (j1<j2){
            cout << -1 << endl;
            return 0;
        } else if (j2<j1){
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
