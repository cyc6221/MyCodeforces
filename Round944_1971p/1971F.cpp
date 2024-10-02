#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll r;
	cin >> r;

	ll res = 0;
	ll x, y, pre = 0;

	for(x = r; x > 0; x--) {
		for(y = pre; y <= r; y++) {
			if(x * x + y * y >= r * r && x * x + y * y < r * r + 2 * r + 1) break;
			else pre++;
		}
		//cout << pre << endl;
		for(y = pre; y <= r; y++) {
			if(x * x + y * y >= r * r && x * x + y * y < r * r + 2 * r + 1) res++;
			else break;
		}
	}

	cout << res * 4 << endl;
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

