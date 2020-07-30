#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, c=0;
    cin >> n;
    for (int i=1; i<=n; ++i){
        int ai;
        cin >> ai;
        if (ai&1 && i&1){
            ++c;
        }
    }
    cout << c;
}
