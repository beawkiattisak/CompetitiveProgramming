#include <iostream>

using namespace std;

int fibonacci(int n) {
    int fibo[n+2];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    return fibo[n];
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d", fibonacci(number));
    

    return 0;
}