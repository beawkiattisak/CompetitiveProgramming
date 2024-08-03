#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s1, s2; cin >> s1 >> s2;
    bool flag = true;
    int len1 = s1.length();
    int len2 = s2.length();

    if (len2 == len1) {
        for (int i = 0; i < s1.length(); ++i) {
            if (s1[i] != s2[len1-i-1]) {
                flag = false;
            }
        }
    } else {
        flag = false;
    }

    if (flag) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}