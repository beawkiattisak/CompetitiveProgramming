#include <bits/stdc++.h> 

using namespace std;

unordered_map<int, int> memo;
int f(int n) {
    if (memo.count(n)) return memo[n];
    if (n==0) return 0;
    if (n==1) return 1;

    return memo[n] = f(n-1) + f(n-2);
    }


int main() {

    int n; cin >> n;
    cout << f(5);

    return 0;
}