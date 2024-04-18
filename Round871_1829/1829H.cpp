#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;


ll res, n, k, mod;
vector<ll> vt;
set<ll> s;

void dfs(ll index) {
	if(index >= 64) {
		if(s.size() == 0) return;
		ll temp = 63, bit = 0, p = 1, num = 1;
		for(auto& x : s) {
			temp = temp & x;
		}
		while(temp > 0) {
			if(temp % 2 == 1) bit++;
			temp /= 2;
		}
		if(bit == k) {
			if(s.size() == 1) {
				for(auto& x : s) {
					for(ll t = 1; t <= vt[x]; t++) {
						p *= 2;
						p %= mod;
					}
					/*
					temp = x, bit = 0;
					while(temp > 0) {
						if(temp % 2 == 1) bit++;
						temp /= 2;
					}
					if(bit == k) {
						p *= 2;
						p %= mod;
						p = (p + mod - 1) % mod;
					}*/
					p = (p + mod - 1) % mod;
					num *= p;
					num %= mod;
				}
				res += num;
				res %= mod;
			}

			else {
				for(auto& x : s) {
					for(ll t = 1; t <= vt[x]-1; t++) {
						p *= 2;
						p %= mod;
					}
					//cout << "ppp " << p << endl;
					num *= p;
					num %= mod;
					//p = 1;
				}
				res += num;
				res %= mod;
			}
		}
		//cout << "num " << num << endl;
		return;
	}
	
	dfs(index+1);
	if(vt[index] > 0) {
		s.insert(index);
		dfs(index+1);
		s.erase(index);
	}
}

void sol() {
	//ll n, k, mod = 1000000007;
	mod = 1000000007;
	cin >> n >> k;
	vector<ll> a(n);
	//vector<ll> vt(64, 0);
	vt.assign(64, 0);
	for(ll i=0; i<n; i++) {
		cin >> a[i];
		vt[a[i]]++;
	}
	//cout << "fjeiojafoijweif\n";
	
	res = 0;
	if(k == 0) {
		ll p = 1;
		for(ll t = 1; t <= vt[0]; t++) {
			p *= 2;
			p %= mod;
		}
		p = (p + mod - 1) % mod;
		ll other = 0, q = 1;
		for(ll i = 1; i <= 63; i++) {
			other += vt[i];
		}
		for(ll t = 1; t <= other; t++) {
			q *= 2;
			q %= mod;
		}
		
		res = p * q % mod;
		//cout << res << endl;
	}
	//else {
		//res = 0;
		s = {};
		dfs(1);
		//cout << "res ";
		cout << res % mod << endl;
	//}
}

int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}

