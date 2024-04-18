#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

ll mod = 1e9+7, res = 0;
vector<vector<ll>> e;
vector<ll> vis;

ll inv(ll i) {
  return i <= 1 ? i : mod - (mod/i) * inv(mod % i) % mod;
}

void dfs(ll i, ll cnt) {
	if(vis[i]) return;
	vis[i] = 1;
	
	res = (res + cnt) % mod;
	for(auto& j : e[i]) {
		dfs(j, cnt+1);
	}
}

void sol() {
	ll n, k, mod = 1e9+7;
	cin >> n >> k;
	e.assign(n+1, vector<ll>{});
	vector<vector<ll>> a(n, vector<ll>(2));
	for(ll i=0; i<n-1; i++) {
		cin >> a[i][0] >> a[i][1];
		e[a[i][0]].push_back(a[i][1]);
		e[a[i][1]].push_back(a[i][0]);
	}
	
	if(k == 1) res = n;
	else {
		for(int i=1; i<=n; i++) {
			vis.assign(n+1, 0);
			dfs(i, 1);
			res--;
		}
		//cout << res % mod << endl;
		res = res / k % mod;
		//cout << "res " << res << endl;
		}
	
	ll p = 1, q = 1;
	for(ll i = n; i >= n-k+1; i--) {
		p *= i;
		p %= mod;
	}
	for(ll j = 1; j<=k; j++) {
		q *= j;
		q %= mod;
	}
	//cout << "pq " << p << ' ' << q << endl;
	//q = (res % mod) * (q % mod);
	q = res * q % mod;
	//cout << q << " res " << p << endl;
	res = q * inv(p) % mod;
	cout << res << endl;
	
	
	//cout << "1 " << 16 * inv(6) % mod << endl;
	//cout << "2 " << 32 * inv(12) % mod << endl;
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	//int test; cin >> test;
	//for(int i=1; i<=test; i++) {
		sol();
	//}
	return 0;
}

