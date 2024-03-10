#include <iostream>

using namespace std;

#define ll long long
#define arr array
#define endl "\n"
#define pb push_back
#define fi first
#define se second
#define vt vector
#define all(x) (x).begin(), (x).end()

const int MOD = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int min = arr[0];
  int max = arr[0];

  for (int i = 0; i < n; ++i) {
    if(arr[i] < min) {
      min = arr[i];
    }

    if(arr[i] > max) {
      max = arr[i];
    }
  }

  cout << min << endl;
  cout << max << endl;

 ;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
