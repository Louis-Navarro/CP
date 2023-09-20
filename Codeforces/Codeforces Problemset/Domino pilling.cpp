#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n, r=0;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n,0));
    for (int i=0; i<m; ++i){
        for (int j=0; j<n; ++j){
            if (j<n-1 && a[i][j]==0 && a[i][j+1]==0){
                a[i][j]=1;
                a[i][j+1]=1;
                ++r;
            } else if(i<m-1 && a[i][j]==0 && a[i+1][j]==0){
                a[i][j]=1;
                a[i+1][j]=1;
                ++r;
            }
        }
    }
    cout << r << "\n";
}
