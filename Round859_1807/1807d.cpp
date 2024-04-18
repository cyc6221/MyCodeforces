#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, q, temp, kk;
	cin >> n >> q;
	vector<ll> a(n), odd(n+1, 0);
	for(int i=0; i<n; i++) {
		cin >> a[i];
		odd[i+1] = (a[i] + odd[i]) % 2;
	}
	
	while(q--) {
		int l, r, k;
		cin >> l >> r >> k;
		
		temp = (odd[r] != odd[l-1]) ? 1 : 0;
		temp = (temp != odd.back()) ? 1 : 0;
		
		if((r - l + 1) % 2 == 0) kk = 0;
		else if(k % 2 == 0) kk = 0;
		else kk = 1;
		
		if(temp != kk) cout << "YES\n";
		else cout << "NO\n";
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

