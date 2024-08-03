#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, b = 0, a = 0; cin >> n;
    string s; cin >> s;

    for (int i = 0; i < s.length(); ++i) {
        if(s[i] == 'A') {
            a++;
        } else {
            b++;
        }
    }

    if (a > b) {
        printf("Anton");
    } else if (b > a) {
        printf("Danik");
    } else {
        printf("Friendship");
    }

    return 0;
}