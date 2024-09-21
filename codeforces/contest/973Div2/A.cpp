#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);

    int t; 
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        if (n == 0) {
            cout << 0 << '\n';
            continue;
        }
        long long ts = 0;
        long long minb = min(x, y);
        ts = (n + minb - 1) / minb;
        cout << ts << '\n';
    }

    return 0;
}
