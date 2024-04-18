#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, m, res = 0;
	cin >> n >> m;

	vector<vector<ll>> g(m, vector<ll>(n, 0));
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> g[j][i];
		}
	}
	for(int j=0; j<m; j++) {
		sort(g[j].rbegin(), g[j].rend());
	}
	for(int j=0; j<m; j++) {
		ll temp = 0, count = 0;
		for(auto& x : g[j]) {
			//cout << x << endl;
			res += temp - x * count;
			temp += x;
			count ++;
		}
		//cout << endl;
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

