#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    cin >> n;
    
    int a[n];
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    
    cin >> q;
    for (int i=0; i<q; ++i){
        int bi, ci;
        cin >> bi >> ci;
        int c=0;
        
        for (int j=0; j<n; ++j){
            if (a[j] == bi){
                a[j] = ci;
            }
            c+=a[j];
        }

        cout << c << endl;
    }
}
