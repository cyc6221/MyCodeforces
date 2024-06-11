#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;
#define pii pair<int, int>
#define pll pair<ll, ll>

void sol() {
	ll h, n;
	cin >> h >> n;
	vector<ll> a(n), c(n);
	for(ll i=0; i<n; i++) {
		cin >> a[i];
	}
	for(ll i=0; i<n; i++) {
		cin >> c[i];
	}

    //priority_queue <pii, vector<pii>, greater<pii> > pq;
	priority_queue <pll, vector<pll>, greater<pll> > pq;
	for(ll i=0; i<n; i++) {
		pq.push({1, i});
	}

	ll cur = 1;
	while(h > 0) {
		auto now = pq.top();
		if(now.first == cur) {
			ll index = now.second;
			ll T = now.first + c[index];
			pq.push({T, index});
			pq.pop();
			h -= a[index];
		}
		else {
			cur = now.first;
		}
	}
	cout << cur << endl;
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

