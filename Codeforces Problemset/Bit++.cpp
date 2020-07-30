#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x=0;
    for (int i=0; i<n; ++i){
        string l;
        cin >> l;
        if (l.front()=='+' || l.back()=='+')
            ++x;
        else
            --x;
    }
    cout << x;
}
