#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if (b==0)
        return a;

    else
        return gcd(b, a%b);
}

int lcm(int a, int b){
    return a*b/gcd(a,b);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int l=1e9;
        int aa, ab;
        for (int a=1; a<n; a++){
            int b=n-a;
            int lcmab=lcm(a,b);
            if (l>lcmab){
                l=lcmab;
                aa=a;
                ab=b;
            }
        }
        cout << aa << " " << ab << "\n";
    }
}
