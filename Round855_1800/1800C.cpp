#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, res = 0;
	cin >> n;
	vector<ll> vt(n, 0);
	priority_queue <ll> q;
	for(ll i=0; i<n; i++) {
		cin >> vt[i];
		if(vt[i] != 0) q.push(vt[i]);
		else if(!q.empty()) {
			res += q.top();
			q.pop();
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
