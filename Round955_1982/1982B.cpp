#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll x, y, k, temp;
	cin >> x >> y >> k;

	while(k > 0 && x > 1) {
		temp = y - (x % y);
		if(k < temp) {
			x += k;
			cout << x << endl;
			return;
		}
		k -= temp;
		x += temp;
		while(x % y == 0) x /= y;
	}
	if(k > 0) {
		k %= (y-1);
		x += k;
	}
	cout << x << endl;

/*
	while(k > 0) {
		temp = y - (x % y);
		if(k < temp) {
			x += k;
			cout << x << endl;
			return;
		}
		k -= temp;
		x += temp;
		while(x % y == 0) {
			x /= y;
		}
	}
	cout << x << endl;*/
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}

