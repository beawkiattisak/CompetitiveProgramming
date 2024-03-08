#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a, b;
    cin >> a >> b;

    while (a != b) {
        if (a > b) {
            a -= b;
        } else if (b > a) {
            b -= a;
        }
    }

    cout << a;

    return 0;
}