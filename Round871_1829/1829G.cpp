#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

vector<vector<ll>> g;

void build() {
	ll level = 0;
	for(ll i=1; i<=1000000; i++) {
		if(level == g.size()) {
			g.emplace_back();
		}
		g[level].push_back(i * i);
		if(g[level].size() == level+1) level++;
	}
}

void sol() {
	ll n, res = 0;
	cin >> n;
	
	ll level = 0, index = 0, sum = 0;
	while(n > sum + level) {
		sum += level;
		level ++;
	}
	index = n - sum;
	
	//cout << level << ' ' << index << endl;
	
	ll l = index, r = index-1;
	for(ll i=level-1; i>=0; i--) {
		l--; if(l < 0) l = 0;
		if(r >= g[i].size()) r = g[i].size()-1;
		
		for(ll j=l; j <= r; j++) {
			res += g[i][j];
		}
	}
	cout << res << endl;
}

int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	build();

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}

