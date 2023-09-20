#include <bits/stdc++.h>

using namespace std;

int main(){
    int k,n,w;
    cin >> k >> n >> w;
    // w*(w+1)/2 * k - n
    int p = w*(w+1)/2*k - n;
    if (p>0)
        cout << p << "\n";
    else
        cout << 0 << "\n";
}
