#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    int k, n, count = 0;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int kv = a[k-1];

    for (int i = 0; i < n; ++i) {
        if (a[i] >= kv && a[i] != 0) {
            count++;
        }
    }
    
    cout << count;
    return 0;
}