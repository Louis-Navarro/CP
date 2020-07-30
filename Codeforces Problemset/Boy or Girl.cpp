#include <bits/stdc++.h>

using namespace std;

#define uset unordered_set

int main(){
    string s;
    cin >> s;
    uset<char> a;
    for (int i=0; i<s.size(); ++i){
        a.insert(s[i]);
    }
    if (a.size()&1)
        cout << "IGNORE HIM!" << "\n";
    else
        cout << "CHAT WITH HER!" << "\n";
}
