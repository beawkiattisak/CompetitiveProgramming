#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int m, n;
    cin >> m >> n;
    int array1[m][n];
    int array2[m][n];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> array1[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> array2[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << array1[i][j] + array2[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}