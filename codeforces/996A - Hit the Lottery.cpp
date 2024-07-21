#include <bits/stdc++.h> 

using namespace std;
using ll = long long;

int main() {
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	
	int cash; cin >> cash;
	int cnt = 0;
	
	while (cash != 0) {
		if (cash % 100 == 0) {
			cash -= 100;
			cnt++;
		} else if (cash % 20 == 0) {
			cash -= 20;
			cnt++;
		}
		 else if (cash % 10 == 0) {
			cash -= 10;
			cnt++;
		}
		 else if (cash % 5 == 0) {
			cash -= 5;
			cnt++;
		}  else if (cash % 1 == 0) {
			cash -= 1;
			cnt++;
		}
	}

	cout << cnt;

    return 0;
}
