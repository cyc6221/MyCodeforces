#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n;
	cin >> n;
	vector<vector<ll>> g(n+1, vector<ll>(2, 0));
	for(ll i=0; i<n; i++) {
		ll x, y;
		cin >> x >> y;
		g[x][y] = 1;
	}

	ll res = 0;
	for(ll i=0; i<=n; i++) {
		if(g[i][0] && g[i][1]) {
			res += (n-2);
		}
	}
	for(ll i=1; i<=n-1; i++) {
		if(g[i-1][0] && g[i][1] && g[i+1][0]) res++;
		if(g[i-1][1] && g[i][0] && g[i+1][1]) res++;
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