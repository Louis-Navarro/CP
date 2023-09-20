#include <bits/stdc++.h>

using namespace std;

int main(){
    for (int i=0; i<5; ++i){
        for (int j=0; j<5; ++j){
            int c;
            cin >> c;
            if (c==1){
                int r=0;
                r+=abs(2-i);
                r+=abs(2-j);
                cout << r << "\n";
                return 0;
            }
        }
    }
}
