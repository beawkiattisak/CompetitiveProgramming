#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    string s; cin >> s;
    vector<int> v;
    for (auto& x : s) {
        x = tolower(x);
    }

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != 'a' && s[i] != 'i' && s[i] != 'o' && s[i] != 'e' && s[i] != 'u' && s[i] != 'y') {
            v.push_back(s[i]);
        }
    }

    for (int i = 0; i < v.size(); ++i) {
        cout << ".";
        if (i != v.size()) {
            cout << (char)v[i];
        }
    }


    return 0;
}