#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll res = 0;
	ll x, y, z, k;
	vector<int> temp(3);
	cin >> temp[0] >> temp[1] >> temp[2] >> k;
	sort(temp.begin(), temp.end());
	x = temp[0], y = temp[1], z = temp[2]; //x < y < z
	//cout << x << ' ' << y << ' ' << z << endl;

	for(ll i=1; i<=x; i++) {
		if(k % i != 0) continue;

		ll k1 = k / i;
		for(ll j=1; j<=y; j++) {
			if(k1 % j != 0) continue;

			ll k2 = k1 / j;
			//(i, j, k2) -> (x, y, z)
			
			ll cur = (x-i+1) * (y-j+1) * (z-k2+1);
			if(cur > res) res = cur;
		}
	}


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

