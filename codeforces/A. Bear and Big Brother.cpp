#include <iostream>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, cnt = 0; scanf("%d %d", &a, &b);

    while (b >= a) {
        b = b *2;
        a = a*3;
        cnt++;
    }

    printf("%d", cnt);

    return 0;
}