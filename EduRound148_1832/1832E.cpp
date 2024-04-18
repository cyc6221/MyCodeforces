#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, a1, x, y, m, k, mod = 998244353;
	cin >> n >> a1 >> x >> y >> m >> k;
	vector<ll> com(n+1);
	for(ll i=1; i<=n; i++) {
		if(i < k) com[i] = 0;
		else {
			com[i] = 1;
			for(ll temp = i; temp >= i-k+1; temp--) {
				com[i] *= temp;
				com[i] %= mod;
			}
			for(ll temp = 1; temp <= k; temp++) {
				while(com[i] % temp != 0) com[i] += mod;
				com[i] /= temp;
				com[i] %= mod;
			}
		}
		//cout << "i " << i << " com " << com[i] << endl;
	}
	
	vector<ll> a(n+1), b(n+1, 0);
	/*a[1] = a1;
	for(ll j=2; j<=n; j++) {
		a[j] = a[j-1] * x + y;
		a[j] %= m;
	}
	*/
	a[1] = a1;
	b[1] = com[1] * a[1];
	b[1] %= mod;
	ll res = b[1];
	for(ll i=2; i<=n; i++) {
		a[i] = (a[i-1] * x + y) % m;
		
		for(ll j=1; j<=i; j++) {
			b[i] += com[i-j+1] * a[j];
			b[i] %= mod;
		}
		//cout << "i " << i << " bb " << b[i] << endl;
		
		res = res ^ (b[i] * i);
	}
	/*
	ll res = b[1];
	for(ll i=2; i<=n; i++) {
		b[i] *= i;
		res ^= b[i];
		//res = res ^ (b[i] * i);
	}*/
	cout << res << endl;
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

