#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, mx;
	cin >> n;
	vector<ll> a(n), res(n);
	for(int i=0, temp; i<n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	if(a[0] != 1) {
		cout << "NO\n";
		return;
	}

	res[0] = 1;
	mx = 1;
	for(int i=1; i<n; i++) {
		if(a[i] > mx) {
			cout << "NO\n";
			return;
		}
		else res[i] = min(mx, a[i]);
		mx += res[i];
	}
	cout << "YES\n";
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

