#include <bits/stdc++.h> 

using namespace std;

int main() {

	int n, price = 0; cin >> n;

	while (n!=0) {
		if (n > 10) {
			n -= 15;
			price+=3000;
		} else if ( n >= 4 ) {
			n -= 5;
			price+=1500;
		} else if ( n >= 2) {
			n -= 2;
			price += 800;
		} else if (n >= 1) {
			n -= 1;
			price += 500;
		}	
		else {
			break;
		}
	}

	cout << price;

    return 0;
}
