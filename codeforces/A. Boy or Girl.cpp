#include<bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    int cnt = 0;

    int len = s.length();

    for (int i = 0; i < len; ++i) {
        if (s[i] != s[i-1]) {
            cnt++;
        }
    }

    if (cnt % 2 == 0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }

    return 0;
}