#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    int count = 0;

    while (a>1) {
        count ++;
        a/=2;
    }
    while (b>1) {
        count ++;
        b/=2;
    }
    while (c>1) {
        count ++;
        c/=2;
    }

    cout << count;

    return 0;
}