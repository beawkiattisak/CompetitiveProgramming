#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    int t; cin >> t;
    int n;
    vector<int> v;
    
    while (t--) {
        cin >> n;
        v.push_back(n);
    }
    
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }

    return 0;
}