#include <bits/stdc++.h>

using namespace std;

int main() {
   	cin.tie(nullptr)->ios::sync_with_stdio(false);

    int t, n; cin >> t;
    bool flag = false;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        if (n == 1) {
            flag = true;
        }
    }

    if (flag) {
        cout << "HARD";
    } else {
        cout << "EASY";
    }

    return 0;
}