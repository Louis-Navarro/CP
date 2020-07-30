#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        c += b - a;
        ans = max(ans, c);
    }
    cout << ans << "\n";
}
