#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
    }
}

int main() {
    vector<int> arr = {5, 3, 1, 4, 2};

    cout << "Initial Array: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    bubbleSort(arr);

    cout << "\nSorted Array ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}