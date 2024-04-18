#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n;
	cin >> n;
	vector<ll> vt(n);
	for(ll i=0; i<n; i++) {
		cin >> vt[i];
	}
	
	if(n == 2) {
		if(vt[0] <= vt[1]) cout << "YES\n";
		else cout << "NO\n";
	}
	else if(n % 2 == 1) {
		cout << "YES\n";
	}
	else {
		ll temp = 0;
		for(ll i=0; i<n; i++) {
			if(i % 2 == 0) temp += vt[i];
			else temp -= vt[i];
		}
		if(temp > 0) cout << "NO\n";
		else cout << "YES\n";
	}
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

