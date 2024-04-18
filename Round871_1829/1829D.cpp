#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, m;
	cin >> n >> m;
	if(n < m) {
		cout << "NO\n";
		return;
	}
	if(n == m) {
		cout << "YES\n";
		return;
	}
	if(n % 3 != 0) {
		cout << "NO\n";
		return;
	}
	
	queue<ll> q;
	q.push(n);
	while(!q.empty()) {
		auto top = q.front();
		q.pop();
		if(top == m) {
			cout << "YES\n";
			return;
		}
		if(top % 3 == 0) {
			ll a = top / 3;
			ll b = a * 2;
			if(a >= m) q.push(a);
			if(b >= m) q.push(b);
		}
	}
	cout << "NO\n";
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

