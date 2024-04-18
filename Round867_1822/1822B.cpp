#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n;
	cin >> n;
	vector<ll> a(n, 0);
	for(ll i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	ll res = max(a[0] * a[1], a[n-1] * a[n-2]);
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

