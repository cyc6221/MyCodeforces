#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, res, e;
	cin >> n;
	e = n * 2 + 1;
	res = 1 + (1 + e) / 2 * (n+1);
	cout << res << endl;
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

