#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

set<vector<ll>> res;

void f(vector<vector<ll>>& g, ll i) {
	if(i == g.size()-1) {
		res.insert({g[i][0], g[i][1]});
		return;
	}
	
	//cout << "fffff " << i << endl;
	for(ll j = i+1; j<g.size(); j++) {
		if(g[j][0] > g[i][0]) break;
		
		if(g[j][0] == g[i][0]) {
			g[j][1] += g[i][1];
			f(g, i+1);
			g[j][1] -= g[i][1];
		}
	}
	for(ll j = i+1; j<g.size(); j++) {
		if(g[j][1] > g[i][1]) break;

		if(g[j][1] == g[i][1]) {
			g[j][0] += g[i][0];
			f(g, i+1);
			g[j][0] -= g[i][0];
		}
	}
}

void sol() {
	ll n;
	cin >> n;
 	vector<vector<ll>> g(n, vector<ll>(2, 0));
	for(ll i=0; i<n; i++) {
		cin >> g[i][0] >> g[i][1];
	}
	if(n == 1) {
		cout << "1\n";
		cout << g[0][0] << ' ' << g[0][1] << endl;
		return;
	}
	
	sort(g.begin(), g.end());
	res.clear();
	f(g, 0);
	
	cout << res.size() << endl;
	for(auto& i : res) {
		cout << i[0] << ' ' << i[1] << endl;
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

