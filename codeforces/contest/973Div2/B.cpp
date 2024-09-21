#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<int> fight(n); 

        for (int j = 0; j < n; j++) {
            cin >> fight[j];
        }

        long long p = n - 2;
        long long cur = fight[p];

        while (p != 0) {
            cur = cur - fight[p - 1];
            p--;
        }

        cur = fight[n - 1] - cur;
        cout << cur << '\n';
    }

    return 0;
}
