#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, k, res = 0, mod = 1e9+7;
	cin >> n >> k;
	vector<ll> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	vector<ll> dp(64, 0);
	for(int i=0; i<n; i++) {
		vector<ll> cnt(64, 0);
		cnt[a[i]] = 1;
		for(ll j=0; j<64; j++) {
			cnt[a[i] & j] += dp[j];
		}
		for(ll j=0; j<64; j++) {
			if(__builtin_popcount(j) == k) {
				res = (res + cnt[j]) % mod;
			}
			dp[j] = (dp[j] + cnt[j]) % mod;
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

