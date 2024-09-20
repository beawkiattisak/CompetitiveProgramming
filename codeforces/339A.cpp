#include <bits/stdc++.h>

using namespace std;

int main() {
   	cin.tie(nullptr)->ios::sync_with_stdio(false);

    string s; cin >> s;
    int len = s.length();
    vector<int> v;

    for (int i = 0; i < len; ++i) {
        if (isdigit(s[i])) {
            v.push_back(s[i] - '0');
        }
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i != v.size() - 1) {
            cout << "+";
        }
    }


    return 0;
}