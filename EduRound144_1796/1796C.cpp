#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll l, r, mod = 998244353;
	cin >> l >> r;

	ll mx = 0, num = 0;
	//unordered_map <ll, set<ll> > ump;
	vector<pair<ll, ll>> vt(r+5, {1, 1});

	for(ll i = r/2; i >= l; i--) {
		ll t = 2;
		while(i * t <= r) {
			ll a = 1 +vt[i*t].first;
			ll b = vt[i*t].second;

			if(a > vt[i].first) {
				vt[i].first = a;
				vt[i].second = b;
			}
			else if(a == vt[i].first) {
				vt[i].second += b;
			}
			else break;
			t++;
		}
	}
	
	
	for(int i=l; i<=r; i++) {
		//cout << i << ' ' << vt[i].first << ' ' << vt[i].second << endl;

		if(vt[i].first > mx) {
			mx = vt[i].first;
			num = vt[i].second;
		}
		else if(vt[i].first == mx) {
			num = (num + vt[i].second) % mod;
		}
	}

	cout << mx << ' ' << num % mod << endl;
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

