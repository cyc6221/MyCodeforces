#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, k, q, pre = 0, res = 0;
	cin >> n >> k >> q;
	vector<ll> a(n);
	for(ll i=0; i<n; i++) {
		cin >> a[i];
		if(a[i] <= q) pre++;
		else {
			if(pre >= k) res += ((pre-k+1) + 1) * (pre-k+1) / 2;
			pre = 0;
		}
	}
	if(pre >= k) res += ((pre-k+1) + 1) * (pre-k+1) / 2;
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

