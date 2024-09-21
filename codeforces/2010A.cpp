#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);
    int q, n, tmp; cin >> q;
    while(q--) {
        int sum = 0;
        bool state = true;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> tmp;
            if (state) {
                sum+=tmp;
                state = false;
            } else {
                sum-=tmp;
                state = true;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}