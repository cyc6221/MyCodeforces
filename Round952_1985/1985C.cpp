#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	ll sum = 0, res = 0, mx = -1;
	cin >> n;
	vector<ll> vt(n);
	for(int i=0; i<n; i++) {
		cin >> vt[i];
		mx = max(mx, vt[i]);
		sum += vt[i];
		if(sum - mx == mx) res++;
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

