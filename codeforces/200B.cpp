#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);

    string a, b; cin >> a >> b;
    transform(begin(a), end(a), begin(a), ::tolower);
    transform(begin(b), end(b), begin(b), ::tolower);
    cout << a.compare(b) << endl;

    return 0;
}