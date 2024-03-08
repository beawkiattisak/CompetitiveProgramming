#include <iostream>
#include <algorithm>

using namespace std;

int main () {

    int arr[3] = {1, 0, 0};
    string a;
    cin >> a;

    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == 'A') {
            swap(arr[0], arr[1]);
        }
        if (a[i] == 'B') {
            swap(arr[1], arr[2]);
        }
        if (a[i] == 'C') {
            swap(arr[0], arr[2]);
        }
    }
    
    if(arr[0] == 1) {
        cout << 1;
    } else if (arr[1] == 1) {
        cout << 2;
    } else if (arr[2] == 1) {
        cout << 3;
    }

    return 0;
}
