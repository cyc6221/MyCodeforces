#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, mx = 0;
	cin >> n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	ll temp = mx+1;
	mx++;
	
	bool same = 1;
	unordered_map <ll, set<ll>> ump;
	for(ll i=0, j=n-1; i<j; i++, j--) {
		if(a[i] > a[j]) swap(a[i], a[j]);
		ump[a[i]].insert(a[j]);
		
		if(a[i] != a[j]) same = 0;
		if(a[j]-a[i] == 1) {
			cout << "1\n";
			return;
		}
	}
	
	if(same) {
		cout << "0\n";
		return;
	}
	
	while(mx > 0) {
		//cout << mx << endl;
		int check = 1;
		for(auto& p : ump) {
			ll x = p.first;
			for(auto& y : p.second) {
				if(x % mx != y % mx) {
					check = 0;
					break;
				}
			}
		}
		/*
		for(int i=0, j=n-1; i<j; i++, j--) {
			if(a[i] % mx != a[j] % mx) {
				check = 0;
				break;
			}
		}
		*/
		if(check) {
			if(mx == temp) {
				mx = 0;
			}
			cout << mx << endl;
			return;
		}
		mx--;
	}
	cout << "0\n";
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

