#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, k;
	cin >> n >> k;
	if(n % 2 == 0) {
		cout << "YES\n";
		return;
	}
	if(n % 2 == k % 2) {
		cout << "YES\n";
		return;
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

