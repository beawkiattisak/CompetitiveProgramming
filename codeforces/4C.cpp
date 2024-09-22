#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    int t; cin >> t;
    string name;
    pair<string, int> p;
    vector<pair<string, int>> v;

    while (t--) {
        bool found = false;
        cin >> name;

        for (auto& p : v) {
            if (p.first == name) {
                found = true;
                cout << name << p.second << "\n";
                p.second++;
                break;
            }
        }

        if (!found) {
            cout << "OK" << "\n";
            v.push_back({name, 1});
        }

    }


    return 0;
}