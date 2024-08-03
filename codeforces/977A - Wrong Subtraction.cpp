#include <iostream>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int num, k; scanf("%d %d", &num , &k);

    while(k--) {
        if (num % 10 == 0) {
            num/=10;
        } else {
            num--;
        }
    } 
    printf("%d", num);

    return 0;
}